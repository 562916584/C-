// Resource.cpp: implementation of the CResource class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Resource.h"
#include "stdio.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IplImage* CResource::m_peashooter[4] =
{
	cvLoadImage(".\\img\\model\\�㶹����\\0.png"),
	cvLoadImage(".\\img\\model\\�㶹����\\1.png"),
	cvLoadImage(".\\img\\model\\�㶹����\\2.png"),
	cvLoadImage(".\\img\\model\\�㶹����\\3.png")
};
IplImage* CResource::m_sunflower[3] =
{
	cvLoadImage(".\\img\\model\\���տ�\\0.png"),
	cvLoadImage(".\\img\\model\\���տ�\\1.png"),
	cvLoadImage(".\\img\\model\\���տ�\\2.png")
};
IplImage* CResource::m_iceshooter[3] =
{
	cvLoadImage(".\\img\\model\\��������\\0.png"),
	cvLoadImage(".\\img\\model\\��������\\1.png"),
	cvLoadImage(".\\img\\model\\��������\\2.png")
};

IplImage* CResource::m_pumpkin[4] =
{
	cvLoadImage(".\\img\\model\\�ѹ�\\0.png"),
	cvLoadImage(".\\img\\model\\�ѹ�\\1.png"),
	cvLoadImage(".\\img\\model\\�ѹ�\\2.png"),
	cvLoadImage(".\\img\\model\\�ѹ�\\3.png")
};
IplImage* CResource::m_pumpkin_attack[4] =
{
	cvLoadImage(".\\img\\model\\�ѹ�\\attack\\1.jpg"),
	cvLoadImage(".\\img\\model\\�ѹ�\\attack\\2.jpg"),
	cvLoadImage(".\\img\\model\\�ѹ�\\attack\\3.jpg"),
	cvLoadImage(".\\img\\model\\�ѹ�\\attack\\4.jpg")
};
IplImage* CResource::m_nut[4] =
{
	cvLoadImage(".\\img\\model\\���\\0.png"),
	cvLoadImage(".\\img\\model\\���\\1.png"),
	cvLoadImage(".\\img\\model\\���\\2.png"),
	cvLoadImage(".\\img\\model\\���\\3.png")
};
IplImage* CResource::m_cherrybomb[6] =
{
	cvLoadImage(".\\img\\model\\ӣ��ը��\\0.png"),
	cvLoadImage(".\\img\\model\\ӣ��ը��\\1.png"),
	cvLoadImage(".\\img\\model\\ӣ��ը��\\2.png"),
	cvLoadImage(".\\img\\model\\ӣ��ը��\\3.png"),
	cvLoadImage(".\\img\\model\\ӣ��ը��\\4.png"),
	cvLoadImage(".\\img\\model\\ӣ��ը��\\5.png")
};
IplImage* CResource::m_hatZom_move[11] =
{
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\1.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\2.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\3.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\4.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\5.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\6.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\7.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\8.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\9.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\10.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\move\\11.jpg")
};
IplImage* CResource::m_hatZom_attack[6] =
{
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\attack\\1.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\attack\\2.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\attack\\3.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\attack\\4.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\attack\\5.jpg"),
	cvLoadImage(".\\img\\model\\ñ�ӽ�ʬ\\attack\\6.jpg")
};
IplImage* CResource::m_normalZom_move[6] =
{
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\move\\1.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\move\\2.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\move\\3.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\move\\4.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\move\\5.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\move\\6.jpg")
};
IplImage* CResource::m_normalZom_attack[6] =
{
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\attack\\1.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\attack\\2.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\attack\\3.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\attack\\4.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\attack\\5.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\attack\\6.jpg")
};
IplImage* CResource::m_normalZom_bomb[10] =
{
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\1.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\2.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\3.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\4.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\5.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\6.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\7.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\8.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\9.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\bomb\\10.jpg")
};
IplImage* CResource::m_normalZom_dead[7] =
{
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\dead\\body\\1.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\dead\\body\\2.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\dead\\body\\3.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\dead\\body\\4.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\dead\\body\\5.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\dead\\body\\6.jpg"),
	cvLoadImage(".\\img\\model\\��ͨ��ʬ\\dead\\body\\7.jpg")
};
IplImage* CResource::m_doorZom_move[9] =
{
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\1.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\2.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\3.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\4.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\5.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\6.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\7.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\8.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\move\\9.jpg")
};
IplImage* CResource::m_doorZom_attack[6] =
{
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\attack\\1.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\attack\\2.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\attack\\3.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\attack\\4.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\attack\\5.jpg"),
	cvLoadImage(".\\img\\model\\���Ž�ʬ\\attack\\6.jpg")
};
IplImage* CResource::m_drumZom_move[6] =
{
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\move\\1.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\move\\2.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\move\\3.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\move\\4.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\move\\5.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\move\\6.jpg")
};
IplImage* CResource::m_drumlZom_attack[6] =
{
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\attack\\1.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\attack\\2.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\attack\\3.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\attack\\4.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\attack\\5.jpg"),
	cvLoadImage(".\\img\\model\\��Ͱ��ʬ\\attack\\6.jpg")
};
IplImage* CResource::m_cards[7] =
{
	cvLoadImage(".\\img\\card\\��������_��.png"),
	cvLoadImage(".\\img\\card\\���_��.png"),
	cvLoadImage(".\\img\\card\\�㶹����_��.png"),
	cvLoadImage(".\\img\\card\\�ѹ�_��.png"),
	cvLoadImage(".\\img\\card\\���տ�_��.png"),
	cvLoadImage(".\\img\\card\\ӣ��ը��_��.png"),
	cvLoadImage(".\\img\\card\\ʳ�˻�_��.png")
};

IplImage* CResource::m_bg = cvLoadImage(".\\img\\bg\\GameBg.png");
IplImage* CResource::m_ball = cvLoadImage(".\\img\\model\\ball.png");
IplImage* CResource::m_iceball = cvLoadImage(".\\img\\model\\iceball.png");
IplImage* CResource::m_sun = cvLoadImage(".\\img\\model\\sun.png");
IplImage* CResource::m_scoop = cvLoadImage(".\\img\\model\\����.png");
IplImage* CResource::m_peashooter_write = cvLoadImage(".\\img\\model\\�㶹����\\��.png");
IplImage* CResource::m_sunflower_write = cvLoadImage(".\\img\\model\\���տ�\\��.png");
IplImage* CResource::m_iceshooter_write = cvLoadImage(".\\img\\model\\��������\\��.png");
IplImage* CResource::m_pumpkin_write = cvLoadImage(".\\img\\model\\�ѹ�\\��.png");
IplImage* CResource::m_nut_write = cvLoadImage(".\\img\\model\\���\\��.png");
IplImage* CResource::m_cherrybomb_write = cvLoadImage(".\\img\\model\\ӣ��ը��\\��.png");
IplImage* CResource::m_startimg = cvLoadImage(".\\img\\bg\\Start.png");
IplImage* CResource::m_endimg = cvLoadImage(".\\img\\bg\\end.png");
IplImage* CResource::m_warning = cvLoadImage(".\\img\\bg\\warning.png");
IplImage* CResource::m_prepare = cvLoadImage(".\\img\\bg\\prepare.png");
CResource::CResource()
{

}

CResource::~CResource()
{
	cvReleaseImage(&m_ball);
	cvReleaseImage(&m_iceball);
	cvReleaseImage(&m_sun);
	cvReleaseImage(&m_bg);
	cvReleaseImage(&m_scoop);
	cvReleaseImage(&m_peashooter_write);
	cvReleaseImage(&m_sunflower_write);
	cvReleaseImage(&m_iceshooter_write);
	cvReleaseImage(&m_pumpkin_write);
	cvReleaseImage(&m_nut_write);
	cvReleaseImage(&m_cherrybomb_write);
	cvReleaseImage(&m_startimg);
	cvReleaseImage(&m_endimg);
	Clear(m_cards, 6);
	Clear(m_peashooter, 4);
	Clear(m_sunflower, 3);
	Clear(m_iceshooter, 3);
	Clear(m_pumpkin, 4);
	Clear(m_pumpkin_attack, 4);
	Clear(m_nut, 4);
	Clear(m_cherrybomb, 6);
	Clear(m_hatZom_move, 11);
	Clear(m_hatZom_attack, 6);
	Clear(m_doorZom_move, 9);
	Clear(m_doorZom_attack, 6);
	Clear(m_drumZom_move, 6);
	Clear(m_drumlZom_attack, 6);
	Clear(m_normalZom_move, 6);
	Clear(m_normalZom_dead, 7);
	Clear(m_normalZom_attack, 6);
	Clear(m_normalZom_bomb, 10);
}
void CResource::LoadImg(IplImage *in[], vector <IplImage* >& out, int num) {
	for (int i = 0; i < num; i++) {
		out.push_back(in[i]);
	}
}

void CResource::Clear(IplImage *img[], int num)
{
	for (int i = 0; i < num; i++) {
		cvReleaseImage(&img[i]);
	}
}
