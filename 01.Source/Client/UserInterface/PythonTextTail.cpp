//Arat:
std::string strGuildName;

if (!CPythonGuild::Instance().GetGuildName(dwGuildID, &strGuildName))
	strGuildName = "Noname";

//Değiştir:
std::string strGuildName;
if (!CPythonGuild::Instance().GetGuildName(dwGuildID, &strGuildName))
	strGuildName = "Noname";
		
if (dwNewIsGuildName == 3)
	strGuildName.insert(0, "[Lonca Lideri] ");
else if (dwNewIsGuildName == 2)
	strGuildName.insert(0, "[Lonca Generali] ");

//Arat:
void CPythonTextTail::RegisterCharacterTextTail(DWORD dwGuildID, DWORD dwVirtualID, const D3DXCOLOR & c_rColor, float fAddHeight)

//Değiştir:
void CPythonTextTail::RegisterCharacterTextTail(DWORD dwGuildID, BYTE dwNewIsGuildName, DWORD dwVirtualID, const D3DXCOLOR & c_rColor, float fAddHeight)