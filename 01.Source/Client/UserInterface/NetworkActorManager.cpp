//Arat:
m_dwGuildID = src.m_dwGuildID;

//Altına ekle:
m_dwNewIsGuildName = src.m_dwNewIsGuildName;

//Arat:
kCreateData.m_dwMountVnum=rkNetActorData.m_dwMountVnum;

//Altına ekle:
kCreateData.m_dwNewIsGuildName=rkNetActorData.m_dwNewIsGuildName;

//Arat:
pkInstFind->ChangeGuild(c_rkNetUpdateActorData.m_dwGuildID);

//Değiştir:
pkInstFind->ChangeGuild(c_rkNetUpdateActorData.m_dwGuildID, c_rkNetUpdateActorData.m_dwNewIsGuildName);

//Arat:
rkNetActorData.m_dwGuildID=c_rkNetUpdateActorData.m_dwGuildID;

//Altına ekle:
rkNetActorData.m_dwNewIsGuildName=c_rkNetUpdateActorData.m_dwNewIsGuildName;