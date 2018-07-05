//*******************************************************************************************************************************
//
//	File name:				EngineStruct.h
//
//	File type:				C header file
//
//	File description:		���涨��ṹͷ�ļ�����Ҫ��������оʶ������������ʹ��ʱͨ�ýṹ
//
//	History:				DATA				ACTION			AUTHOR				MEMO
//							2009/12/5			Create			Xushuo
//*******************************************************************************************************************************

#ifndef _ENGINE_STRUCT_H_
#define _ENGINE_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#define VO_MAX_SPLIT_REDEFINE_MAX							128

//  �������Ͷ���
typedef enum _VO_PHONETIC_TYPE
{
	VO_PHONETIC_TYPE_IPA = 0,								//	��������
	CNT_VO_PHONETIC_TYPE
}VO_PHONETIC_TYPE;


//	�������ݶ���
//	�������������
#define	GENERATION_DATA_TONE								0x00000001
//	���������
#define	GENERATION_DATA_FLUENCY								0x00000002
//	����
#define	GENERATION_DATA_SPEED								0x00000004
//	���ض����������ض��ʣ�
#define	GENERATION_DATA_STATEMENT_STRESS					0x00000008
//	������
#define	GENERATION_DATA_STRESS								0x00000010
//	�ص��(���سͷ��Ĵʣ�����Դ������)
#define	GENERATION_DATA_STRESS_WORD							0x00000020


//	�ı������
typedef struct _TEXT_SPLIT_ITEM_
{
	int nStart;												// ��ԭʼ�ı��е���ʼλ��
	int nLen;												// ��ԭʼ�ı��еĳ���
	char sRedefinition[VO_MAX_SPLIT_REDEFINE_MAX];			// �ض����ı����Ը��ı������ض����ı���ȡ���ı���ʱ��������ȡ�ô��������ԭʼ�ı���ȡ�ã�
	// ȱʡ����ΪNULL;
}TEXT_SPLIT_ITEM, * PTEXT_SPLIT_ITEM;

//	���������ݽṹ
typedef struct _MN_ECODE
{
	unsigned char tblCode[8];
}MN_ECODE, * PMN_ECODE;

#ifdef __cplusplus
}
#endif

#endif
//*******************************************************************************************************************************
// File end
//*******************************************************************************************************************************
