// PeaShooter.h: interface for the CPeaShooter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PEASHOOTER_H__78339EDC_6472_41D9_968D_4DDF11481EEE__INCLUDED_)
#define AFX_PEASHOOTER_H__78339EDC_6472_41D9_968D_4DDF11481EEE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ActiveObj.h"
/**
* @class CPeaShooter
* @brief  �㶹����
*
*
*/
class CPeaShooter : public CActiveObj
{
public:
	/**
	* @brief Timething
	*
	* ʱ�亯��
	* @param ��
	*
	*/
	void Timething();               //��дʱ���¼�����.
	CPeaShooter();
	virtual ~CPeaShooter();
};

#endif // !defined(AFX_PEASHOOTER_H__78339EDC_6472_41D9_968D_4DDF11481EEE__INCLUDED_)

