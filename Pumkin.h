// Pumkin.h: interface for the CPumkin class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PUMKIN_H__11C7DC63_2620_478F_A118_9E27FE5D9CEC__INCLUDED_)
#define AFX_PUMKIN_H__11C7DC63_2620_478F_A118_9E27FE5D9CEC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ActiveObj.h"
/**
* @class CPunkin
* @brief  �ѹ�
*
*
*/
class CPumkin : public CActiveObj
{
public:
	/**
	* @brief Draw
	*
	* ��ͼ����
	* @param bg ����ָ��
	*
	*/
	void Draw(IplImage* bg);
	/**
	* @brief Timething
	*
	* ʱ�亯��
	* @param ��
	*
	*/
	void Timething();
	CPumkin();
	virtual ~CPumkin();

};

#endif // !defined(AFX_PUMKIN_H__11C7DC63_2620_478F_A118_9E27FE5D9CEC__INCLUDED_)

