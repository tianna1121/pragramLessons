
// myMFCView.h : interface of the CmyMFCView class
//

#pragma once


class CmyMFCView : public CView
{
protected: // create from serialization only
	CmyMFCView();
	DECLARE_DYNCREATE(CmyMFCView)

// Attributes
public:
	CmyMFCDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CmyMFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in myMFCView.cpp
inline CmyMFCDoc* CmyMFCView::GetDocument() const
   { return reinterpret_cast<CmyMFCDoc*>(m_pDocument); }
#endif

