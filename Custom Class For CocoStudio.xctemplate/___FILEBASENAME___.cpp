//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"
using namespace std;

#pragma mark - Public methods

bool ___FILEBASENAME___::init() {
    if (!Node::init()) {
        return false;
    }

    // load the character animation timeline
    this->timeline = CSLoader::createTimeline("___FILEBASENAME___.csb");
    // retain the character animation timeline so it doesn't get deallocated
    this->timeline->retain();

    return true;
}

static const std::string getFileName() {
    return "___FILEBASENAME___.csb";
}

#pragma mark - Private methods

#pragma mark View lifecycle

void ___FILEBASENAME___::onEnter()
{
    Node::onEnter();
}

void ___FILEBASENAME___::onExit()
{
    Node::onExit();
}

#pragma mark - Event Callback
Widget::ccWidgetTouchCallback ___FILEBASENAME___::onLocateTouchCallback(const string &callBackName)
{
  if (callBackName == "onTouch")
  {
    return CC_CALLBACK_2(___FILEBASENAME___::onTouch, this);
  }
  return nullptr;
}

Widget::ccWidgetClickCallback ___FILEBASENAME___::onLocateClickCallback(const string &callBackName)
{
  if (callBackName == "onClick")
  {
    return CC_CALLBACK_1(___FILEBASENAME___::onClick, this);
  }
  return nullptr;
}

Widget::ccWidgetEventCallback ___FILEBASENAME___::onLocateEventCallback(const string &callBackName)
{
  if (callBackName == "onEvent")
  {
    return CC_CALLBACK_2(___FILEBASENAME___::onEvent, this);
  }
  return nullptr;
}

void ___FILEBASENAME___::onTouch(cocos2d::Ref* object, cocos2d::ui::Widget::TouchEventType type)
{
  log("onTouch");
}
void ___FILEBASENAME___::onClick(cocos2d::Ref* sender)
{
  log("onClick");
}
void ___FILEBASENAME___::onEvent(cocos2d::Ref* sender, int eventType)
{
  log("onEvent");
}