// IceShooter.h: interface for the CIceShooter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ICESHOOTER_H__5C1D6EC1_B99B_4234_9D4C_45C62685B1A9__INCLUDED_)
#define AFX_ICESHOOTER_H__5C1D6EC1_B99B_4234_9D4C_45C62685B1A9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ActiveObj.h"
/**
* @class CIceShooter
* @brief  �����㶹����
*
* 
*/
class CIceShooter : public CActiveObj
{
public:
	/**
	* @brief Timething
	*
	* ��дʱ�亯��
	* @param ��
	*
	*/
	void Timething();               //��дʱ���¼�����.
	CIceShooter();
	virtual ~CIceShooter();
};

#endif // !defined(AFX_ICESHOOTER_H__5C1D6EC1_B99B_4234_9D4C_45C62685B1A9__INCLUDED_)

