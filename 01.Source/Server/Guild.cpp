//Arat:
DWORD CGuild::GetMemberPID(const std::string& strName)
{
	for ( TGuildMemberContainer::iterator iter = m_member.begin();
			iter != m_member.end(); iter++ )
	{
		if ( iter->second.name == strName ) return iter->first;
	}

	return 0;
}

//Altına ekle:
BYTE CGuild::NewIsGuildGeneral(DWORD pid)
{
	for ( TGuildMemberContainer::iterator iter = m_member.begin(); iter != m_member.end(); iter++ )
	{
		if ( iter->first == pid )
			return iter->second.is_general;
	}
	return 0;
}