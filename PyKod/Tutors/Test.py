import os
path = 'D:\\'
projectName = 'project1'
folders = ['input', 'output', 'scenes', 'assets']
def  createFolder(path):
	if not os.path.exists(path):
		os.mkdir(path)

fullpath = os.path.join(path, projectName)
createFolder(fullpath)
for f in folders:
	folder = os.path.join(fullpath, f)
	createFolder(folder)
	# f = os.mkdir(f)
	# j = os.path.join(projectName, f)
