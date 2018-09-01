// Cherrybomb.h: interface for the CCherrybomb class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHERRYBOMB_H__8BBB3DAE_E084_4F62_A3E2_18E1576FBD05__INCLUDED_)
#define AFX_CHERRYBOMB_H__8BBB3DAE_E084_4F62_A3E2_18E1576FBD05__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ActiveObj.h"
/**
* @class CCherrybomb
* @brief  ӣ��ը��
*
* ӣ��ը���� һ��ֲ�� ��CActiveObj�������� �����ͼ�ж�
*/
class CCherrybomb : public CActiveObj
{
public:
	/**
	* @brief Draw
	*
	*��ͼ��������ը������
	* @param bg ����ͼ
	*
	*/
	void Draw(IplImage* bg);
	CCherrybomb();
	virtual ~CCherrybomb();

};

#endif // !defined(AFX_CHERRYBOMB_H__8BBB3DAE_E084_4F62_A3E2_18E1576FBD05__INCLUDED_)

