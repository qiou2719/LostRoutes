#ifndef __BSAE_LAYER_H__
#define __BSAE_LAYER_H__

#include "cocos2d.h"
#include "SystemHeader.h"

class BaseLayer : public cocos2d::Layer
{
public:

	virtual bool init();

	virtual void onEnterTransitionDidFinish();

	void menuBackCallback(cocos2d::Ref* pSender);
protected:
private:
};
#endif