#pragma once
#include "UI/Source/HelloWorld.h"
namespace helloworld {

	class ChatGPTViewModel : public IChatGPTViewModel
	{
	private:
		vl::collections::ObservableList<vl::Ptr<IChat>> chats;

	public:
		::vl::Ptr<::vl::reflection::description::IValueObservableList> GetChats() override;
		void AddChat() override;
	};

}
