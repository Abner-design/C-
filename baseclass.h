#ifndef BASECLASS_H_INCLUDED
#define BASECLASS_H_INCLUDED



#include "stdafx.h"

#define TRANSTIME2GRADE 16
//header file
/*
//ѧ���ɼ�����ϵͳ
1���Ҷ��� ѧ�� �γ�
2�����������֮����ʲô��ϵ ѧ��ѡ�γ�

������ʲô�������Ժ���Ϊ
�γ̵����Ժ���Ϊ����Щ
���ԣ����� �γ̱�� �γ����� ѧʱ ѧ�� �÷�
��Ϊ����Щ ����ѧʱ����ѧ�� ���ݵ÷��������

ѧ��
���� ѧ�� ���� �Ա� ѡ�ε�����
��Ϊ �����Լ��޵Ŀγ̼����Լ��ļ���

���󣺳����һ���࣬���� ����
*/
enum class COURSE_TYPE{GENERAL,COMPULSORY,ELECTIVE};
//error: 'string' does not name a type|
//definition
class course
{
public:
    //member of data
    string m_szName;
    string m_szID;
    COURSE_TYPE m_enType;
    unsigned int m_nTimes;

private:
    unsigned int m_nScore;

public:
    //member of function
    //���ݵ÷֣����������
    //100 5 95-99 4.5 90-94 4
    float calGPA();

    //����ѧʱ����ѧ��
    float calGrade();
};

struct AA
{
    //ȱʡ�ķ���Ȩ�� ��public
};
/*
//��װ 1 ���ǰѹ��е����Ժ���Ϊд��һ����;
����Ȩ�޵�����
public  ���з���Ȩ��
protected ��������Ȩ��
private ˽�е�

ʲô������
*/

#endif // BASECLASS_H_INCLUDED
