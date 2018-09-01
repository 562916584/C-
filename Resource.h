// Resource.h: interface for the CResource class.
//
//////////////////////////////////////////////////////////////////////
#include "cv.h"
#include "highgui.h"
#include "vector"
using namespace std;


#if !defined(AFX_RESOURCE_H__6BC9150F_ACCE_4042_8B98_AEE1A550DB9D__INCLUDED_)
#define AFX_RESOURCE_H__6BC9150F_ACCE_4042_8B98_AEE1A550DB9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/**
* @class Resource
* @brief  ͼƬ��Դ��
*���� ����������ϷͼƬ��Դ
*
*/
class CResource
{
public:
	/**
	* @brief Clear
	*
	* ���ͼƬ��Դ
	* @param img ͼƬָ��
	* @param num ������ͼƬ
	*/
	void Clear(IplImage* img[], int num);
	CResource();
	virtual ~CResource();
	/**
	* @brief LoadImg
	*
	* ����ͼƬ��vector��
	* @param in ͼƬָ��
	* @param out ͼƬvector������
	* @param num ������ͼƬ
	*/
	static void LoadImg(IplImage *in[], vector <IplImage* >& out, int num);
	static IplImage* m_ball;                                   /**< �ӵ���ͼ */
	static IplImage* m_iceball;                                /**< �����ӵ���ͼ */ 
	static IplImage* m_sun;                                    /**< ̫����ͼ */
	static IplImage* m_bg;                                     /**< ���� */
	static IplImage* m_scoop;                                  /**< ����ͼ */
	static IplImage* m_cards[7];                               /**< ��Ƭͼ */
	static IplImage* m_peashooter[4];                          /**< �㶹����ͼ */
	static IplImage* m_sunflower[3];                           /**< ���տ�ͼƬ */ 
	static IplImage* m_iceshooter[3];                          /**< �����㶹���� */
	static IplImage* m_pumpkin[4];                             /**< �ѹ�ͼƬ */
	static IplImage* m_pumpkin_attack[4];                      /**< �ѹϹ���ͼ */
	static IplImage* m_nut[4];                                 /**< ���ͼ */
	static IplImage* m_cherrybomb[6];                          /**< ӣ��ը��ͼ */
	static IplImage* m_peashooter_write;                       /**< �㶹������Ӱͼ */
	static IplImage* m_sunflower_write;                        /**< ���տ���Ӱͼ */
	static IplImage* m_iceshooter_write;                       /**< �����㶹��Ӱͼ */
	static IplImage* m_pumpkin_write;                          /**< �ѹ���Ӱͼ */
	static IplImage* m_nut_write;                              /**< �����Ӱͼ */
	static IplImage* m_cherrybomb_write;                       /**< ӣ��ը����Ӱͼ */
	static IplImage* m_hatZom_move[11];                        /**< ñ�ӽ�ʬ�ƶ� */
	static IplImage* m_hatZom_attack[6];                       /**< ñ�ӽ�ʬ���� */
	static IplImage* m_doorZom_move[9];                        /**< ���Ž�ʬ�ƶ� */
	static IplImage* m_doorZom_attack[6];                       /**< ���Ž�ʬ���� */
	static IplImage* m_drumZom_move[6];                        /**< ��ñ��ʬ�ƶ� */
	static IplImage* m_drumlZom_attack[6];                    /**< ��ñ��ʬ���� */
	static IplImage* m_normalZom_move[6];                      /**< ��ͨ��ʬ�ƶ� */
	static IplImage* m_normalZom_dead[7];                       /**< ��ͨ��ʬ���� */
	static IplImage* m_normalZom_attack[6];                    /**< ��ͨ��ʬ���� */
	static IplImage* m_normalZom_bomb[10];                    /**< ��ͨ��ʬ��ը */
	static IplImage* m_startimg;                             /**< ���濪ʼͼ */ 
	static IplImage* m_endimg;                               /**< �������ͼ */
	static IplImage* m_warning;                               /**< ����ͼ */
	static IplImage* m_prepare;                                 /**< ׼��ͼ */
};

#endif // !defined(AFX_RESOURCE_H__6BC9150F_ACCE_4042_8B98_AEE1A550DB9D__INCLUDED_)

