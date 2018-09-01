// ActiveObj.h: interface for the CActiveObj class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ACTIVEOBJ_H__6CD6E9AB_4AE9_41B4_9483_91B734C60195__INCLUDED_)
#define AFX_ACTIVEOBJ_H__6CD6E9AB_4AE9_41B4_9483_91B734C60195__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GameObject.h"
#include "cv.h"
#include "highgui.h"
#include <vector>
#include <string.h>
using namespace std;
/**
* @class CActiveObj
* @brief ��̬��Ϸ���
*
* CActiveObj  ��̬��Ϸ��� ����Ϸ�������Ķ�̬����Ļ���
*/
class CActiveObj : public CGameObject      //�ж�����gameobj
{
public:
	/**
	* @brief SetAttack
	*
	*�ı������״̬���� �麯��
	* @param ��
	* @return void  ������ֵ
	*/
	virtual void SetAttack();
	/**
	* @brief Timething
	*
	* ʱ�亯��
	* @param ��
	* 
	*/
	virtual void Timething();
	CActiveObj();
	virtual ~CActiveObj();
	/**
	* @brief Draw
	*
	* ��ͼ����
	* @param bg ����ͼ��ַ
	* 
	*/
	virtual void Draw(IplImage* bg);
	void SetPos(int i, int j);            //�������꺯��, i ��ʾ��, j ��ʾ��.
	bool CheckDead();                      //����Ƿ�ñ����.
	/**
	 * @brief TakeDamage 
	 * 
	 * �ж������յ��˺�
	 * @param damage ��������˺�ֵ
	 * 
	 */
	virtual void TakeDamage(int damege);   //���˺�����.
	/**
	 * @brief SetAnimType 
	 * 
	 * �ı������״̬ ��move attack ilde dead
	 * @param srr �������״̬���ַ���
	 * 
	 */
	virtual void SetAnimType(string str);  //�ı�actobj״̬.
	/**
	* @brief Move
	*
	*�ƶ�
	* @param ��
	* 
	*/
	virtual void Move();                   //�ƶ�.
	vector <IplImage* >::iterator m_it;  //actobj��ͼƬ����.       /**< actobj��ͼƬ���� */
	vector <IplImage* > m_Idle_Img;         //actobj�����ö���.    /**< actobj�����ö��� */
	vector <IplImage* > m_Move_Img;         //actobj�����߶���.    /**< actobj�ƶ����� */
	vector <IplImage* > m_Attack_Img;       //actobj�Ĺ�������.    /**< actobj�Ĺ������� */
	vector <IplImage* > m_Dead_Img;         //actobj����������.   /**< actobj���������� */
	/**
	 * @brief Getobjtype 
	 * 
	 * �������ĵ���� 0ֲ�� 1��ʬ
	 * @param ��
	 * @return int ����������
	 */
	int Getobjtype();
	/**
	* @brief Getm_isbullet
	*
	* ����Ƿ���Է����ӵ�
	* @param ��
	* @return int �����Ƿ���Է����ӵ�
	*/
	bool Getm_isbullet();
	/**
	* @brief Chnagem_isbullet
	*
	* �ı�״̬
	* @param ��
	* 
	*/
	void Changem_isbullet(bool isbullet);
	/**
	* @brief	Getballtype
	*
	* ����ӵ�����
	* @param ��
	* @return int �����ӵ�����
	*/
	int Getballtype();
	/**
	* @brief Getm_iscreatsun
	*
	* �Ƿ���Բ�������
	* @param ��
	* @return bool �����ж�
	*/
	bool Getm_iscreatsun();
	/**
	* @brief Changem_iscreatsun
	*
	* �ı� �����Ƿ��������
	* @param bool iscreatsun �Ƿ��ܲ�������״̬��
	* 
	*/
	void Changem_iscreatsun(bool iscreatsun);
	/**
	* @brief Changem_ismove
	*
	* �ı��ƶ�״̬
	* @param bool ismove
	* 
	*/
	void Changem_ismove(bool ismove);
	/**
	* @brief Getm_ismove
	*
	* ����ƶ�״̬
	* @param ��
	* @return bool �����ƶ�״̬
	*/
	bool Getm_ismove();
	/**
	* @brief Getm_attack
	*
	* ��ù���״̬
	* @param ��
	* @return bool ���ع���״̬
	*/
	bool Getm_attack();
	/**
	* @brief Getm_bomb
	*
	* ��ñ�ը״̬
	* @param ��
	* @return bool ���ر�ը״̬
	*/
	bool Getm_bomb();
	/**
	* @brief Getm_pumkin
	*
	* ����Ƿ�Ϊ�ѹ�
	* @param ��
	* @return bool �Ƿ�Ϊ�ѹ�
	*/
	bool Getm_pumkin();
	/**
	* @brief Getm_isdead
	*
	* �������״̬
	* @param ��
	* @return bool ��������״̬
	*/
	bool Getm_isdead();
	/**
	* @brief Getm_isidle
	*
	* ��õȴ�״̬
	* @param ��
	* @return bool ���صȴ�״̬
	*/
	bool Getm_isidle();
	/**
	* @brief Changem_normal
	*
	* ��ý�ʬ���
	* @param ��
	* @return bool ���ؽ�ʬ���
	*/
	void Changem_normal(bool normal);
protected: 
	int m_hp;  	                            //Ѫ�� .          /**< �����Ѫ�� */
	int m_speed;                            //�ٶ�.           /**< ������˶��ٶ� */
	bool m_isIdle;                          //�Ƿ�������.     /**< �Ƿ����� */
	bool m_isMove;                          //�Ƿ����ƶ�.     /**< �Ƿ��ƶ� */
	bool m_isDead;                          //�Ƿ�������.     /**< �Ƿ����� */
	bool m_isAttack;                        //�Ƿ��ڹ���.     /**< �Ƿ��ڹ��� */
	bool m_isBomb;                          //�Ƿ񱻱�ը.     /**< �Ƿ񱻱�ը */
	bool m_isBullet;                        //�Ƿ���Է��ӵ�. /**< �Ƿ���Է��ӵ� */
	bool m_isCreatsun;                      //�Ƿ������������./**< �Ƿ���Բ������� */
	bool m_isPumkin;                        //�Ƿ����ѹϡ�     /**< �Ƿ����ѹ� */
	bool m_ischomper;                       //�Ƿ���ʳ�˻�     /**< �Ƿ���ʳ�˻� */
	int m_balltype;                         //�ӵ�����.        /**< �ӵ����� */
	int m_imgNum;                           //actobj��ͼƬ���. /**< actobj��ͼƬ��� */
	int m_imgSum;                           //actobj��ͼƬ��������. /**< actobj��ͼƬ�������� */
	int m_animRate;                         //actobj�Ķ���֡��.   /**< actobj�Ķ���֡�� */
	int m_objType;                          //���ֽ�ʬ��ֲ��.    /**< ���ֽ�ʬ��ֲ�� 1Ϊ��ʬ 0Ϊֲ�� */
	int m_bomb;                                                  /**< �Ƿ�ը */
	bool m_isNormal;                        //�Ƿ��Ϊ��ͨ��ʬ.  /**< �Ƿ�����ͨ��ʬ */

};

#endif // !defined(AFX_ACTIVEOBJ_H__6CD6E9AB_4AE9_41B4_9483_91B734C60195__INCLUDED_)

