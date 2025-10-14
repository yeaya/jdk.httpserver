#include <sun/net/httpserver/HttpError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _HttpError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpError, serialVersionUID)},
	{}
};

$MethodInfo _HttpError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpError::*)($String*)>(&HttpError::init$))},
	{}
};

$ClassInfo _HttpError_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.HttpError",
	"java.lang.RuntimeException",
	nullptr,
	_HttpError_FieldInfo_,
	_HttpError_MethodInfo_
};

$Object* allocate$HttpError($Class* clazz) {
	return $of($alloc(HttpError));
}

void HttpError::init$($String* msg) {
	$RuntimeException::init$(msg);
}

HttpError::HttpError() {
}

HttpError::HttpError(const HttpError& e) {
}

HttpError HttpError::wrapper$() {
	$pendingException(this);
	return *this;
}

void HttpError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* HttpError::load$($String* name, bool initialize) {
	$loadClass(HttpError, name, initialize, &_HttpError_ClassInfo_, allocate$HttpError);
	return class$;
}

$Class* HttpError::class$ = nullptr;

		} // httpserver
	} // net
} // sun