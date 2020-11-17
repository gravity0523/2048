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
	

}

//�h���[
void CObj2048Main::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;	//�`�挳�؂���ʒu�̐ݒ�
	RECT_F dst; //�`���\���ʒu

	Font::StrDraw(L"�e�X�g���", 700, 300, 16, c);
	//�ڂ���__________________________________________
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 384.0f;
	src.m_bottom = 384.0f;
	dst.m_top = 108.0f;
	dst.m_left = 208.0f;
	dst.m_right = 592.0f;
	dst.m_bottom = 492.0f;
	
	Draw::Draw(0, &src, &dst, c, 0.0f);
}