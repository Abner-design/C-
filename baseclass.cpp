
#include "baseclass.h"
//���ݵ÷֣����������
//100 5 95-99 4.5 90-94 4
//error: 'course' has not been declared|

float course::calGPA()
{
    m_nScore = 98;
    return 1.0;
}

//����ѧʱ����ѧ��
float course::calGrade()
{
    return (float)m_nTimes/TRANSTIME2GRADE;
}
