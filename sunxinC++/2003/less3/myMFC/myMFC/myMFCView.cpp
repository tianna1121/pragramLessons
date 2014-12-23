
// myMFCView.cpp : implementation of the CmyMFCView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "myMFC.h"
#endif

#include "myMFCDoc.h"
#include "myMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmyMFCView

IMPLEMENT_DYNCREATE(CmyMFCView, CView)

BEGIN_MESSAGE_MAP(CmyMFCView, CView)
END_MESSAGE_MAP()

// CmyMFCView construction/destruction

CmyMFCView::CmyMFCView()
{
	// TODO: add construction code here

}

CmyMFCView::~CmyMFCView()
{
}

BOOL CmyMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CmyMFCView drawing

void CmyMFCView::OnDraw(CDC* /*pDC*/)
{
	CmyMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CmyMFCView diagnostics

#ifdef _DEBUG
void CmyMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CmyMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmyMFCDoc* CmyMFCView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmyMFCDoc)));
	return (CmyMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CmyMFCView message handlers
