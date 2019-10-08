//Arat:
PyObject * textTailRegisterCharacterTextTail(PyObject * poSelf, PyObject * poArgs)

//Kod bloğunu tamamen değiştir:
PyObject * textTailRegisterCharacterTextTail(PyObject * poSelf, PyObject * poArgs)
{
	int iGuildID;
	if (!PyTuple_GetInteger(poArgs, 0, &iGuildID))
		return Py_BuildException();
	int iNewIsGuildName;
	if (!PyTuple_GetInteger(poArgs, 1, &iNewIsGuildName))
		return Py_BuildException();
	int iVirtualID;
	if (!PyTuple_GetInteger(poArgs, 2, &iVirtualID))
		return Py_BuildException();

	CPythonTextTail::Instance().RegisterCharacterTextTail(iGuildID, iVirtualID, iNewIsGuildName, D3DXCOLOR(1.0f, 1.0f, 1.0f, 1.0f));

	return Py_BuildNone();
}