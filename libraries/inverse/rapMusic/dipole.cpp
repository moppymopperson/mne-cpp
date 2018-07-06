//=============================================================================================================
/**
* @file     dipole.cpp
* @author   Christoph Dinh <christoph.dinh@live.de>;
* @version  1.0
* @date     March, 2011
*
* @section  LICENSE
*
* Copyright (C) 2013 Christoph Dinh. All rights reserved.
*
* No part of this program may be photocopied, reproduced,
* or translated to another program language without the
* prior written consent of the author.
*
*
* @brief    ToDo Documentation...
*
*/

#ifndef DIPOLE_SOURCES //Because this cpp is part of the header -> template
#define DIPOLE_SOURCES

//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "dipole.h"


//*************************************************************************************************************
//=============================================================================================================
// STL INCLUDES
//=============================================================================================================


//*************************************************************************************************************
//=============================================================================================================
// DEFINE NAMESPACE INVERSELIB
//=============================================================================================================

namespace INVERSELIB
{


//*************************************************************************************************************
//=============================================================================================================
// USED NAMESPACES
//=============================================================================================================


//*************************************************************************************************************
//=============================================================================================================
// DEFINE MEMBER METHODS
//=============================================================================================================

template <class T>
Dipole<T>::Dipole()
: m_vecPosition(Matrix<T, 3, 1>::Zero(3))
, m_vecDirection(Matrix<T, 3, 1>::Zero(3))
, m_dLength(1)
, m_dFrequency(0)
{

}


//*************************************************************************************************************

template <class T>
Dipole<T>::~Dipole()
{

}


}//Namespace

#endif //DIPOLE_SOURCES