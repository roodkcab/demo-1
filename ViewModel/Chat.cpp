#include "Chat.h"

using namespace vl;
using namespace vl::presentation;

namespace helloworld {

	static vl::WString EscapeCDATA(const vl::WString& text)
	{
		//escape ]]>
		vl::WString escaped = L"";
		vl::vint j = 0;
		for (vl::vint i = 0; i <= text.Length() - 3; i++)
		{
			if (text.Sub(i, 3) == L"]]>")
			{
				escaped += text.Sub(j, i);
				escaped += L"]]]]><![CDATA[>";
				j = i + 3;
			}
		}
		escaped += text.Sub(j, text.Length() - j);
		return escaped;
	}

	static vl::WString Trim(const vl::WString& text)
	{
		int pre = 0, post = 0;
		for (int i = 0; i < text.Length(); i++)
		{
			auto c = text.Sub(i, 1);
			if (c != L"\n" && c != L"\r" && c != L" " && c != L"\t")
			{
				break;
			}
			pre = i + 1;
		}
		for (int i = 1; i <= text.Length(); i++)
		{
			auto c = text.Sub(text.Length() - i, 1);
			if (c != L"\n" && c != L"\r" && c != L" " && c != L"\t")
			{
				break;
			}
			post = i;
		}
		return text.Sub(pre, text.Length() - post - pre);
	}


	static vl::Ptr<::vl::presentation::DocumentModel> GenDoc(const WString& _content)
	{
		auto tempResource = Ptr(new GuiResource);
		auto tempResourceItem = Ptr(new GuiResourceItem);
		tempResource->AddItem(L"Document", tempResourceItem);
		auto tempResolver = Ptr(new GuiResourcePathResolver(tempResource, L""));
		auto parser = GetParserManager()->GetParser<vl::glr::xml::XmlDocument>(L"XML");
		vl::collections::List<GuiResourceError> errors;
		auto raw = WString(L"<Doc><Content><p align=\"") + (L"Left") + L"\" style=\"Chat\"><![CDATA[" + EscapeCDATA(Trim(_content)) + L"]]></p></Content></Doc>";
		auto xml = parser->Parse({}, raw, errors);
		return DocumentModel::LoadFromXml(tempResourceItem, xml, tempResolver, errors);
	}

	Chat::Chat(const WString& _content)
	{
		row = 0;
		column = 0;
		content = _content;
		doc = GenDoc(content);
	}

	::vl::WString helloworld::Chat::GetContent()
	{
		return ::vl::WString();
	}

	void helloworld::Chat::SetContent(const::vl::WString& __vwsn_value_)
	{
	}

	::vl::Ptr<::vl::presentation::DocumentModel> helloworld::Chat::GetRichContent()
	{
		return doc;
	}

	void Chat::AppendContent(const WString& _content)
	{
		console::Console::Write(_content);
		content += _content;
		vl::collections::Array<WString> arr(1);
		arr.Set(0, _content);
		doc->EditText(TextPos(row, column), TextPos(row, column), false, arr);
		column += _content.Length();
	}

}
