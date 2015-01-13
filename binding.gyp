{
	"targets": [],
	"conditions": [
		["OS=='win'", {
			"targets": [{
				"target_name": "rename",
				"sources": [ "src/win/rename.cc" ]
			}]
		}]
	]
}