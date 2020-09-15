
#include "baseclass.h"
//根据得分，计算出绩点
//100 5 95-99 4.5 90-94 4
//error: 'course' has not been declared|

float course::calGPA()
{
    m_nScore = 98;
    return 1.0;
}

//根据学时计算学分
float course::calGrade()
{
    return (float)m_nTimes/TRANSTIME2GRADE;
}
