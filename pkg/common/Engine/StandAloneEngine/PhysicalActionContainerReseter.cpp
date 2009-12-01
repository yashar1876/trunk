/*************************************************************************
*  Copyright (C) 2004 by Janek Kozicki                                   *
*  cosurgi@berlios.de                                                    *
*                                                                        *
*  This program is free software; it is licensed under the terms of the  *
*  GNU General Public License v2 or later. See file LICENSE for details. *
*************************************************************************/

#include"PhysicalActionContainerReseter.hpp"
#include<yade/core/World.hpp>

YADE_PLUGIN((PhysicalActionContainerReseter)(BexResetter));

PhysicalActionContainerReseter::PhysicalActionContainerReseter(){}
PhysicalActionContainerReseter::~PhysicalActionContainerReseter(){} 
void PhysicalActionContainerReseter::action(World* ncb){ ncb->bex.reset(); }

void BexResetter::action(World* ncb){ ncb->bex.reset(); }

