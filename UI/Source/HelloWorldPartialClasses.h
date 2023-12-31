﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_HELLOWORLDPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_HELLOWORLDPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

namespace vl_workflow_global
{
	struct __vwsnf1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize_;
	struct __vwsnf2_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
	struct __vwsnf3_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
	class __vwsnc1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize__vl_reflection_description_IValueSubscription;
}

namespace helloworld
{
	class ChatItemTemplateConstructor;
	class ChatItemTemplate;
	class IChat;
	class IChatGPTViewModel;
	class MainWindowConstructor;
	class MainWindow;

	class ChatItemTemplateConstructor : public ::vl::Object, public ::vl::reflection::Description<ChatItemTemplateConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ChatItemTemplateConstructor>;
#endif
	protected:
		::vl::Ptr<::helloworld::IChat> ViewModel;
		::helloworld::ChatItemTemplate* self;
		::vl::presentation::compositions::GuiCellComposition* contentCell;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0;
		::vl::presentation::controls::GuiDocumentLabel* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_2;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_3;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_4;
		::vl::Ptr<::vl::presentation::elements::GuiSolidBorderElement> __vwsn_precompile_5;
		void __vwsn_helloworld_ChatItemTemplate_Initialize(::helloworld::ChatItemTemplate* __vwsn_this_);
	public:
		ChatItemTemplateConstructor();
	};

	class ChatItemTemplate : public ::vl::presentation::templates::GuiListItemTemplate, public ::helloworld::ChatItemTemplateConstructor, public ::vl::reflection::Description<ChatItemTemplate>
	{
		friend class ::helloworld::ChatItemTemplateConstructor;
		friend class ::vl_workflow_global::__vwsnc1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ChatItemTemplate>;
#endif
	public:
		::vl::Ptr<::helloworld::IChat> __vwsn_parameter_ViewModel;
		::vl::Ptr<::helloworld::IChat> GetViewModel();
		ChatItemTemplate(::vl::Ptr<::helloworld::IChat> __vwsn_ctor_parameter_ViewModel);
		void __vwsn_instance_ctor_();
		~ChatItemTemplate();
	};

	class IChat : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IChat>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IChat>;
#endif
	public:
		::vl::Event<void()> ContentChanged;
		::vl::Event<void()> RichContentChanged;
		::vl::presentation::compositions::GuiCellComposition* ContentCell;
		virtual ::vl::WString GetContent() = 0;
		virtual ::vl::Ptr<::vl::presentation::DocumentModel> GetRichContent() = 0;
	};

	class IChatGPTViewModel : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IChatGPTViewModel>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IChatGPTViewModel>;
#endif
	public:
		virtual ::vl::Ptr<::vl::reflection::description::IValueObservableList> GetChats() = 0;
		::vl::presentation::controls::GuiListControl* ListView;
		virtual void AddChat() = 0;
	};

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend struct ::vl_workflow_global::__vwsnf2_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::vl::Ptr<::helloworld::IChatGPTViewModel> ViewModel;
		::vl::presentation::controls::GuiBindableListView* listViewChats;
		::helloworld::MainWindow* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_2;
		::vl::presentation::controls::GuiButton* __vwsn_precompile_3;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_4;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_5;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_6;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_7;
		void __vwsn_helloworld_MainWindow_Initialize(::helloworld::MainWindow* __vwsn_this_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::helloworld::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::helloworld::MainWindowConstructor;
		friend struct ::vl_workflow_global::__vwsnf2_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		::vl::Ptr<::helloworld::IChatGPTViewModel> __vwsn_parameter_ViewModel;
		::vl::Ptr<::helloworld::IChatGPTViewModel> GetViewModel();
		MainWindow(::vl::Ptr<::helloworld::IChatGPTViewModel> __vwsn_ctor_parameter_ViewModel);
		~MainWindow();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class HelloWorld
	{
	public:

		static HelloWorld& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsnf1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize_
	{
		::helloworld::ChatItemTemplateConstructor* __vwsnthis_0;

		__vwsnf1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize_(::helloworld::ChatItemTemplateConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf2_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_
	{
		::helloworld::MainWindowConstructor* __vwsnthis_0;

		__vwsnf2_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_(::helloworld::MainWindowConstructor* __vwsnctorthis_0);

		::vl::presentation::templates::GuiListItemTemplate* operator()(const ::vl::reflection::description::Value& __vwsn_viewModel_) const;
	};

	struct __vwsnf3_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_
	{
		::helloworld::MainWindowConstructor* __vwsnthis_0;

		__vwsnf3_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_(::helloworld::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	class __vwsnc1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::helloworld::ChatItemTemplateConstructor* __vwsnthis_0;

		__vwsnc1_HelloWorld_helloworld_ChatItemTemplateConstructor___vwsn_helloworld_ChatItemTemplate_Initialize__vl_reflection_description_IValueSubscription(::helloworld::ChatItemTemplateConstructor* __vwsnctorthis_0);

		::vl::Ptr<::helloworld::IChat> __vwsn_bind_cache_0;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0();
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
