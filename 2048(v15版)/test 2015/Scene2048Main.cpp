//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include "GameL\Audio.h"
#include "GameL/DrawTexture.h"
//#include "GameL\DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include"Scene2048Main.h"
#include"GameHead.h"

//�R���X�g���N�^
CScene2048Main::CScene2048Main()
{

}

//�f�X�g���N�^
CScene2048Main::~CScene2048Main()
{

}

//�Q�[�����C�����������\�b�h
void CScene2048Main::InitScene()
{
	CObj2048Main* p = new CObj2048Main();
	Objs::InsertObj(p, OBJ_2048, 1);

	//�O���t�B�b�N�ǂݍ���
	Draw::LoadImageW(L"Picture/2048panel(384).png", 0, TEX_SIZE_512);
	Draw::LoadImageW(L"Picture/Number.png", 1, TEX_SIZE_512);

	//���y���ǂݍ���

	//SE���̓o�^

}

//�Q�[�����C�����s���\�b�h
void CScene2048Main::Scene()
{

}