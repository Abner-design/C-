#ifndef BASECLASS_H_INCLUDED
#define BASECLASS_H_INCLUDED



#include "stdafx.h"

#define TRANSTIME2GRADE 16
//header file
/*
//学生成绩管理系统
1）找对象 学生 课程
2）对象与对象之间有什么关系 学生选课程

对象有什么样的属性和行为
课程的属性和行为有哪些
属性：名称 课程编号 课程类型 学时 学分 得分
行为有哪些 根据学时换算学分 根据得分算出绩点

学生
属性 学号 姓名 性别 选课的数组
行为 根据自己修的课程计算自己的绩点

抽象：抽象出一个类，归纳 演绎
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
    //根据得分，计算出绩点
    //100 5 95-99 4.5 90-94 4
    float calGPA();

    //根据学时计算学分
    float calGrade();
};

struct AA
{
    //缺省的访问权限 是public
};
/*
//封装 1 就是把共有的属性和行为写成一个类;
访问权限的问题
public  公有访问权限
protected 保护访问权限
private 私有的

什么叫外面
*/

#endif // BASECLASS_H_INCLUDED
