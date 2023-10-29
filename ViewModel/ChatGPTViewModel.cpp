#include "ChatGPTViewModel.h"
#include "Chat.h"

using namespace vl;
using namespace vl::reflection::description;

namespace helloworld {

	void ChatGPTViewModel::AddChat()
	{
		Ptr<Chat> answer = Ptr(new Chat(L""));
		chats.Insert(0, answer);
		vl::presentation::controls::GetApplication()->InvokeAsync([=]() {
			vint height = 0;
			WString text = L"我是一个专家在光学和半导体制造领域。我了解光刻机的工作原理以及光学设计的基础。我将使用物理原理和光学方程来解释为什么光刻机的光路需要多次反射。 我将帮助你实现你的目标，通过以下步骤： 解释光刻机中光路设计的基本原则。 阐明多次反射在光刻过程中的作用。 用物理和光学理论支持这些观点。 我的任务完成时，你将了解到光刻机为什么要设计成多次反射的光路，并且了解这样设计的科学依据。 首先，光刻机中的光路设计基本上是为了实现什么目的呢？";
			vint len = text.Length();
			for (vint i = 0; i < len; i++) {
				auto chunk = text.Sub(i, 1);
				answer->AppendContent(chunk);
				Thread::Sleep(200);
				vl::presentation::controls::GetApplication()->DelayExecuteInMainThread([=, &height]() {
					answer->ContentChanged();
					answer->RichContentChanged();
					//scroll->SetPosition(scroll->GetMaxPosition());
				}, 0);
			}
		});
	}

	::vl::Ptr<::vl::reflection::description::IValueObservableList> ChatGPTViewModel::GetChats()
	{
		return UnboxValue<vl::Ptr<IValueObservableList>>(BoxParameter(chats));
	}
}
