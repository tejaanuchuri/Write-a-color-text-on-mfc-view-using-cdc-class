
// Write a color text on mfc view using cdc classView.cpp : implementation of the CWriteacolortextonmfcviewusingcdcclassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Write a color text on mfc view using cdc class.h"
#endif

#include "Write a color text on mfc view using cdc classDoc.h"
#include "Write a color text on mfc view using cdc classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWriteacolortextonmfcviewusingcdcclassView

IMPLEMENT_DYNCREATE(CWriteacolortextonmfcviewusingcdcclassView, CView)

BEGIN_MESSAGE_MAP(CWriteacolortextonmfcviewusingcdcclassView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CWriteacolortextonmfcviewusingcdcclassView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CWriteacolortextonmfcviewusingcdcclassView construction/destruction

CWriteacolortextonmfcviewusingcdcclassView::CWriteacolortextonmfcviewusingcdcclassView() noexcept
{
	// TODO: add construction code here

}

CWriteacolortextonmfcviewusingcdcclassView::~CWriteacolortextonmfcviewusingcdcclassView()
{
}

BOOL CWriteacolortextonmfcviewusingcdcclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CWriteacolortextonmfcviewusingcdcclassView drawing

void CWriteacolortextonmfcviewusingcdcclassView::OnDraw(CDC* pDC)
{

	COLORREF color = RGB(239, 78, 185);
	pDC->SetTextColor(color);
	pDC->TextOut(220, 80, L"Hello Teja...!");
	CWriteacolortextonmfcviewusingcdcclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CWriteacolortextonmfcviewusingcdcclassView printing


void CWriteacolortextonmfcviewusingcdcclassView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CWriteacolortextonmfcviewusingcdcclassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CWriteacolortextonmfcviewusingcdcclassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CWriteacolortextonmfcviewusingcdcclassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CWriteacolortextonmfcviewusingcdcclassView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CWriteacolortextonmfcviewusingcdcclassView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CWriteacolortextonmfcviewusingcdcclassView diagnostics

#ifdef _DEBUG
void CWriteacolortextonmfcviewusingcdcclassView::AssertValid() const
{
	CView::AssertValid();
}

void CWriteacolortextonmfcviewusingcdcclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWriteacolortextonmfcviewusingcdcclassDoc* CWriteacolortextonmfcviewusingcdcclassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWriteacolortextonmfcviewusingcdcclassDoc)));
	return (CWriteacolortextonmfcviewusingcdcclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CWriteacolortextonmfcviewusingcdcclassView message handlers
