// StillObj.h: interface for the CStillObj class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STILLOBJ_H__00D2BFC2_F704_467F_B115_5543DF66BB85__INCLUDED_)
#define AFX_STILLOBJ_H__00D2BFC2_F704_467F_B115_5543DF66BB85__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GameObject.h"
/**
* @class CStillObj
* @brief  ��̬���
*��̬�����
*
*/
class CStillObj : public CGameObject                
{
public:
	CStillObj();
	virtual ~CStillObj();
	/**
	* @brief Timething
	*
	* ʱ�亯��
	* @param ��
	*
	*/
	virtual void Timething();
	//�������꣬��������������.
	/**
	* @brief SetPos
	*
	* ����λ�ú���
	* @param x ����λ��x
	* @param y ����λ��y
	*/
	virtual void SetPos(int x, int y);
	/**
	* @brief Draw
	*
	* ��ӡ��Ƭר��Draw
	* @param bg ����ͼָ��
	* @param up Ϊ�ϰ벿������
	* @param down Ϊ�°벿������
	* @param l Ϊ���²��ֱ���
	* @param tx λ��
	* @param ty λ��
	*/
	virtual void Draw(IplImage* bg, double down, double up = 1, double l = 1, int tx = 0, int ty = 0);
	bool m_isCd;                                   /**< �Ƿ�����ȴ*/

};

#endif // !defined(AFX_STILLOBJ_H__00D2BFC2_F704_467F_B115_5543DF66BB85__INCLUDED_)

