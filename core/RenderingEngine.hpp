/*************************************************************************
*  Copyright (C) 2004 by Olivier Galizzi                                 *
*  olivier.galizzi@imag.fr                                               *
*                                                                        *
*  This program is free software; it is licensed under the terms of the  *
*  GNU General Public License v2 or later. See file LICENSE for details. *
*************************************************************************/

#pragma once

#include "World.hpp"
#include<yade/lib-serialization/Serializable.hpp>

class RenderingEngine :  public Serializable
{	
	public :
		RenderingEngine():Serializable() {};
		virtual ~RenderingEngine() {} ;
	
		virtual void render(const shared_ptr<World>& , const int selection = -1) {throw;};
		virtual void renderWithNames(const shared_ptr<World>& ) {throw;};
		virtual void init() {throw;};
		virtual void initgl() {};

	REGISTER_CLASS_AND_BASE(RenderingEngine,Serializable);
};

REGISTER_SERIALIZABLE(RenderingEngine);


