//Arat:
DWORD CInstanceBase::GetGuildID()
{
	return m_dwGuildID;
}

//Altına ekle:
BYTE CInstanceBase::GetNewIsGuildName()
{
	return m_dwNewIsGuildName;
}

//Arat:
if (GetInstanceType() == CActorInstance::TYPE_ENEMY)
	m_dwLevel = CPythonNonPlayer::Instance().GetMobLevel(GetRace());
else
	m_dwLevel = c_rkCreateData.m_dwLevel;
m_dwGuildID = c_rkCreateData.m_dwGuildID;
m_dwEmpireID = c_rkCreateData.m_dwEmpireID;

//Altına ekle:
m_dwNewIsGuildName = c_rkCreateData.m_dwNewIsGuildName;


//Arat:
void CInstanceBase::ChangeGuild(DWORD dwGuildID)
{
	m_dwGuildID=dwGuildID;

	DetachTextTail();
	AttachTextTail();
	RefreshTextTail();
}

//Kod bloğunu tamamen değiştir:
void CInstanceBase::ChangeGuild(DWORD dwGuildID, DWORD dwNewIsGuildName)
{
	m_dwGuildID=dwGuildID;
	m_dwNewIsGuildName=dwNewIsGuildName;

	DetachTextTail();
	AttachTextTail();
	RefreshTextTail();
}

//Arat:
m_dwGuildID = 0;

//Altına ekle:
m_dwNewIsGuildName = 0;