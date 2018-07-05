//*******************************************************************************************************************************
//
//	File name:				VoiceOnIPA.h
//
//	File type:				C header file
//
//	File description:		����о�μ�������������ͷ�ļ�
//
//	History:				DATA				ACTION			AUTHOR				MEMO
//							2009/11/9			Create			Xushuo
//
//*******************************************************************************************************************************

#pragma once

//*******************************************************************************************************************************
//	Area of definition
//*******************************************************************************************************************************

// ����λ��ʾ���붨�弰���嶨��
// ��������
#define IPA_BIT_MASK_TYPE					0xF0000000
// ��������
#define		IPA_BIT_TYPE_SP					0x00000000
// ��ʶ����
#define		IPA_BIT_TYPE_SIGN				0xf0000000
// Ԫ������
#define		IPA_BIT_TYPE_VOWEL				0x10000000
// ��������
#define		IPA_BIT_TYPE_CONSONANT			0x20000000

// ����������
#define IPA_BIT_MASK_SUBTYPE				0x0FF00000
// δ������������
#define IPA_BIT_SUBTYPE_NONE				0x00000000
// ������������δ����

// ��ֵ����
#define IPA_BIT_MASK_NUM					0x0000FFFF

// �����ʶ��������Ŷ���
#define VO_IPA_END							0x00000000
#define VO_IPA_SPACE						0x00000020
#define	VO_IPA_RETURN						0x0000000A

#define VO_IPA_STRESS						0xf0000000
#define VO_IPA_LIGHT						0xf0000001

// ������ֵ����
// �������������Ӧֵ˵��.docx��
