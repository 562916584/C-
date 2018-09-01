// Bg.h: interface for the CBg class.
//
//////////////////////////////////////////////////////////////////////
#include "cv.h"
#include "highgui.h"


#if !defined(AFX_BG_H__C9ABEB5D_2BE6_436C_9607_C182F28045A2__INCLUDED_)
#define AFX_BG_H__C9ABEB5D_2BE6_436C_9607_C182F28045A2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/**
* @class CBg
* @brief  ������
*
* ������ �����ű����ͻ滭����
*/
class CBg
{
public:
	/**
	* @brief Show
	*
	*������ͼ�滭��������
	* @param *img  ����ͼָ��  
	* 
	*/
	void Show(IplImage* img);
	/**
	* @brief  Draw
	*
	*ˢ�±���ͼ�����±���ͼ
	* @param ��
	* 
	*/
	void Draw();
	CBg();
	virtual ~CBg();
	IplImage* m_img;   /**< ����ͼָ�� */
	IplImage* m_clone;  /**< ����ͼ��¡ͼָ�� */

};

#endif // !defined(AFX_BG_H__C9ABEB5D_2BE6_436C_9607_C182F28045A2__INCLUDED_)

