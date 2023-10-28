﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_HELLOWORLDREFLECTION
#define VCZH_WORKFLOW_COMPILER_GENERATED_HELLOWORLDREFLECTION

#include "HelloWorld.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			DECL_TYPE_INFO(::helloworld::ChatItemTemplate)
			DECL_TYPE_INFO(::helloworld::ChatItemTemplateConstructor)
			DECL_TYPE_INFO(::helloworld::IChat)
			DECL_TYPE_INFO(::helloworld::IChatGPTViewModel)
			DECL_TYPE_INFO(::helloworld::MainWindow)
			DECL_TYPE_INFO(::helloworld::MainWindowConstructor)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::helloworld::IChat)
				::vl::WString GetContent() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetContent);
				}
				::vl::Ptr<::vl::presentation::DocumentModel> GetRichContent() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetRichContent);
				}
				void SetContent(const ::vl::WString& __vwsn_value_) override
				{
					INVOKE_INTERFACE_PROXY(SetContent, __vwsn_value_);
				}
			END_INTERFACE_PROXY(::helloworld::IChat)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::helloworld::IChatGPTViewModel)
				void AddChat() override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(AddChat);
				}
				::vl::Ptr<::vl::reflection::description::IValueObservableList> GetChats() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetChats);
				}
			END_INTERFACE_PROXY(::helloworld::IChatGPTViewModel)
#endif
#endif

			extern bool LoadHelloWorldTypes();
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
