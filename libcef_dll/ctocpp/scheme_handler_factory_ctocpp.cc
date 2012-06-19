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

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/ctocpp/resource_handler_ctocpp.h"
#include "libcef_dll/ctocpp/scheme_handler_factory_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefResourceHandler> CefSchemeHandlerFactoryCToCpp::Create(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const CefString& scheme_name, CefRefPtr<CefRequest> request) {
  if (CEF_MEMBER_MISSING(struct_, create))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(!scheme_name.empty());
  if (scheme_name.empty())
    return NULL;
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return NULL;
  // Unverified params: browser, frame

  // Execute
  cef_resource_handler_t* _retval = struct_->create(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      scheme_name.GetStruct(),
      CefRequestCppToC::Wrap(request));

  // Return type: refptr_same
  return CefResourceHandlerCToCpp::Wrap(_retval);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefSchemeHandlerFactoryCToCpp,
    CefSchemeHandlerFactory, cef_scheme_handler_factory_t>::DebugObjCt = 0;
#endif

