﻿
// CGWORK0629View.cpp: CCGWORK0629View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CGWORK0629.h"
#endif

#include "CGWORK0629Doc.h"
#include "CGWORK0629View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCGWORK0629View

IMPLEMENT_DYNCREATE(CCGWORK0629View, CView)

BEGIN_MESSAGE_MAP(CCGWORK0629View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCGWORK0629View 构造/析构

CCGWORK0629View::CCGWORK0629View() noexcept
{
	// TODO: 在此处添加构造代码

}

CCGWORK0629View::~CCGWORK0629View()
{
}

BOOL CCGWORK0629View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCGWORK0629View 绘图

void CCGWORK0629View::OnDraw(CDC* /*pDC*/)
{
	CCGWORK0629Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCGWORK0629View 打印

BOOL CCGWORK0629View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CCGWORK0629View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CCGWORK0629View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CCGWORK0629View 诊断

#ifdef _DEBUG
void CCGWORK0629View::AssertValid() const
{
	CView::AssertValid();
}

void CCGWORK0629View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCGWORK0629Doc* CCGWORK0629View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCGWORK0629Doc)));
	return (CCGWORK0629Doc*)m_pDocument;
}
#endif //_DEBUG


// CCGWORK0629View 消息处理程序