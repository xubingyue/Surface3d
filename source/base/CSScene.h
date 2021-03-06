/****************************************************************************
Copyright (c) 2014 PauT

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/


#ifndef	__SSCENE_H__
#define __SSCENE_H__

#include "platform/CSPlatformMacros.h"
#include "base/CSEventReceiver.h"
#include <irrlicht.h>
USING_NS_IRR;


NS_CS_BEGIN

class CS_DLL Scene : public ISceneNode, 
	public EventReceiverDelegate
{
public:
	Scene::Scene(ISceneNode* sceneNode);

	~Scene();
	/*create scene*/
	static Scene* create(ISceneManager* mgr);

	bool init();

	void render();

	virtual const core::aabbox3d<f32>& getBoundingBox() const;

	virtual bool OnEvent(const SEvent& event);

	

private:

};


NS_CS_END


#endif