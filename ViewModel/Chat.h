#pragma once
#include "UI/Source/HelloWorld.h"
namespace helloworld {

class Chat : public IChat
{
private:
	vl::WString content;
	vl::Ptr<::vl::presentation::DocumentModel> doc;
	vl::vint row, column;

public:
	Chat(const vl::WString& _content);
	::vl::WString GetContent() override;
	void SetContent(const::vl::WString& __vwsn_value_) override;
	::vl::Ptr<::vl::presentation::DocumentModel> GetRichContent() override;

	void AppendContent(const vl::WString& __vwsn_value_);
};

}
