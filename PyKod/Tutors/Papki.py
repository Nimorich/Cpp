import os
path = r'D:\bitbuck\PyKod\Tutors'

folders = \
[ ['input',  [
	['src', []],
	['doc', []],
] ], 
  ['output', []], 
  ['scenes', []],
  ['assets', [['textures', []],	['models', 
  		     [['character', []], ['locations', []]]] 
  			 ]
  ]
]

def createFolder(path):
	if not os.path.exists(path):
		os.mkdir(path)

def build(root, data):
	if data:
		for d in data:
			name = d[0]
			path = os.path.join(root, name)
			createFolder(path)
			build(path, d[1])

projectname = input('Enter project name: ')
if projectname:
	fullPath = os.path.join(path, projectname)
	createFolder(fullPath)
	build(fullPath, folders)