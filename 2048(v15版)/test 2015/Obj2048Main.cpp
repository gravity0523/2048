//�g�p�w�b�_�[�t�@�C��
#include "GameL/DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameHead.h"
#include "GameL\Audio.h"

#include"Obj2048Main.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObj2048Main::CObj2048Main()
{
	
}

//�C�j�V�����C�Y
void CObj2048Main::Init()
{
	
}

//�A�N�V����
void CObj2048Main::Action()
{
	//�}�E�X�̍��W��ǂݍ���
	x = (float)Input::GetPosX();
	y = (float)Input::GetPosY();

	//�N���b�N����
	//[0]�̂� true = �����Ă����ԁ@
	//[1]�̂� true = �����Ă��Ȃ����
	//����    true = �����Ă��痣�������
	if (Input::GetMouButtonL() == true)
	{
		c_flag[0] = true;
		c_flag[1] = false;
	}
	if (Input::GetMouButtonL() == false)
	{
		c_flag[1] = true;
	}
	
	//�����蔻��----------------------------------------------
	//��{�^��
	if ((y > 400.0f && y < 468.0f) && (x > 661.0f && x < 729.0f))
	{
		if (c_flag[0]==true && c_flag[1]==true)
		{
			upflag = true;
		}
		else
		{
			upflag == false;
		}
	}
	//���{�^��
	if ((y > 534.0f && y < 602.0f) && (x > 661.0f && x < 729.0f))
	{
		if (c_flag[0] == true && c_flag[1] == true)
		{
			downflag = true;
		}
		else
		{
			downflag == false;
		}
	}
	//���{�^��
	if ((y > 467.0f && y < 535.0f) && (x > 593.0f && x < 661.0f))
	{
		if (c_flag[0] == true && c_flag[1] == true)
		{
			leftflag = true;
		}
		else
		{
			leftflag == false;
		}
	}
	//�E�{�^��
	if ((y > 467.0f && y < 535.0f) && (x > 729.0f && x < 797.0f))
	{
		if (c_flag[0] == true && c_flag[1] == true)
		{
			rightflag = true;
		}
		else
		{
			rightflag == false;
		}
	}





}

//�h���[
void CObj2048Main::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;	//�`�挳�؂���ʒu�̐ݒ�
	RECT_F dst; //�`���\���ʒu

	Font::StrDraw(L"�e�X�g���", 700, 300, 16, c);
	//�p�l��__________________________________________
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 384.0f;
	src.m_bottom = 384.0f;
	dst.m_top = 108.0f;
	dst.m_left = 208.0f;
	dst.m_right = 592.0f;
	dst.m_bottom = 492.0f;
	
	Draw::Draw(0, &src, &dst, c, 0.0f);
	//�{�^��__________________________________________
	//��
	src.m_top = 372.0f;
	src.m_left = 0.0f;
	src.m_right = 68.0f;
	src.m_bottom = 440.0f;
	dst.m_top = 400.0f;
	dst.m_left = 661.0f;
	dst.m_right = 729.0f;
	dst.m_bottom = 468.0f;
	Draw::Draw(1, &src, &dst, c, 0.0f);

	//��
	dst.m_top = 534.0f;
	dst.m_left = 661.0f;
	dst.m_right = 729.0f;
	dst.m_bottom = 602.0f;
	Draw::Draw(1, &src, &dst, c, 180.0f);

	//��
	dst.m_top = 467.0f;
	dst.m_left = 593.0f;
	dst.m_right = 661.0f;
	dst.m_bottom = 535.0f;
	Draw::Draw(1, &src, &dst, c, 90.0f);
	//�E
	dst.m_top = 467.0f;
	dst.m_left = 729.0f;
	dst.m_right = 797.0f;
	dst.m_bottom = 535.0f;
	Draw::Draw(1, &src, &dst, c, 270.0f);


	if (upflag == true)
	{
		Font::StrDraw(L"�㉟���Ă�", 700, 200, 16, c);
	}
	if (downflag == true)
	{
		Font::StrDraw(L"�������Ă�", 700, 250, 16, c);
	}
	if (leftflag == true)
	{
		Font::StrDraw(L"�������Ă�", 700, 300, 16, c);
	}
	if (rightflag == true)
	{
		Font::StrDraw(L"�E�����Ă�", 700, 350, 16, c);
	}

}