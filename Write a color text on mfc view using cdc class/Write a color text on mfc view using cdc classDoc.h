
// Write a color text on mfc view using cdc classDoc.h : interface of the CWriteacolortextonmfcviewusingcdcclassDoc class
//


#pragma once


class CWriteacolortextonmfcviewusingcdcclassDoc : public CDocument
{
protected: // create from serialization only
	CWriteacolortextonmfcviewusingcdcclassDoc() noexcept;
	DECLARE_DYNCREATE(CWriteacolortextonmfcviewusingcdcclassDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CWriteacolortextonmfcviewusingcdcclassDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
