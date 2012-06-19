// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/post_data_element_cpptoc.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_post_data_element_t* cef_post_data_element_create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefPostDataElement> _retval = CefPostDataElement::Create();

  // Return type: refptr_same
  return CefPostDataElementCppToC::Wrap(_retval);
}


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK post_data_element_is_read_only(
    struct _cef_post_data_element_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefPostDataElementCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK post_data_element_set_to_empty(
    struct _cef_post_data_element_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefPostDataElementCppToC::Get(self)->SetToEmpty();
}

void CEF_CALLBACK post_data_element_set_to_file(
    struct _cef_post_data_element_t* self, const cef_string_t* fileName) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: fileName; type: string_byref_const
  DCHECK(fileName);
  if (!fileName)
    return;

  // Execute
  CefPostDataElementCppToC::Get(self)->SetToFile(
      CefString(fileName));
}

void CEF_CALLBACK post_data_element_set_to_bytes(
    struct _cef_post_data_element_t* self, size_t size, const void* bytes) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: bytes; type: simple_byaddr
  DCHECK(bytes);
  if (!bytes)
    return;

  // Execute
  CefPostDataElementCppToC::Get(self)->SetToBytes(
      size,
      bytes);
}

enum cef_postdataelement_type_t CEF_CALLBACK post_data_element_get_type(
    struct _cef_post_data_element_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return PDE_TYPE_EMPTY;

  // Execute
  cef_postdataelement_type_t _retval = CefPostDataElementCppToC::Get(
      self)->GetType();

  // Return type: simple
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK post_data_element_get_file(
    struct _cef_post_data_element_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefPostDataElementCppToC::Get(self)->GetFile();

  // Return type: string
  return _retval.DetachToUserFree();
}

size_t CEF_CALLBACK post_data_element_get_bytes_count(
    struct _cef_post_data_element_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  size_t _retval = CefPostDataElementCppToC::Get(self)->GetBytesCount();

  // Return type: simple
  return _retval;
}

size_t CEF_CALLBACK post_data_element_get_bytes(
    struct _cef_post_data_element_t* self, size_t size, void* bytes) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: bytes; type: simple_byaddr
  DCHECK(bytes);
  if (!bytes)
    return 0;

  // Execute
  size_t _retval = CefPostDataElementCppToC::Get(self)->GetBytes(
      size,
      bytes);

  // Return type: simple
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefPostDataElementCppToC::CefPostDataElementCppToC(CefPostDataElement* cls)
    : CefCppToC<CefPostDataElementCppToC, CefPostDataElement,
        cef_post_data_element_t>(cls) {
  struct_.struct_.is_read_only = post_data_element_is_read_only;
  struct_.struct_.set_to_empty = post_data_element_set_to_empty;
  struct_.struct_.set_to_file = post_data_element_set_to_file;
  struct_.struct_.set_to_bytes = post_data_element_set_to_bytes;
  struct_.struct_.get_type = post_data_element_get_type;
  struct_.struct_.get_file = post_data_element_get_file;
  struct_.struct_.get_bytes_count = post_data_element_get_bytes_count;
  struct_.struct_.get_bytes = post_data_element_get_bytes;
}

#ifndef NDEBUG
template<> long CefCppToC<CefPostDataElementCppToC, CefPostDataElement,
    cef_post_data_element_t>::DebugObjCt = 0;
#endif

