#include <node.h>
#include <v8.h>
#include <windows.h>

using namespace v8;

Handle<Value> SetTitle(const Arguments& args) {
	HandleScope scope;

	SetConsoleTitleW((LPCWSTR)*String::Value(args[0]));

	return scope.Close(Undefined());
}

void init(Handle<Object> exports) {
	NODE_SET_METHOD(exports, "setTitle", SetTitle);
}

NODE_MODULE(rename, init)