#include "NativizedAssets.h"
#include "GripEnum__pf3611121690.h"
FText E__GripEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GripEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__GripEnum__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[56D89FB447AD339B48B17C8C427B4E95]\", \"E23493A14B06A5C5A3A8B8A1CE5EF618\", \"Open\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[56D89FB447AD339B48B17C8C427B4E95]\", \"C482B6CD40A90B1FB57264AB30313DDF\", \"CanGrab\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[56D89FB447AD339B48B17C8C427B4E95]\", \"42456EF64A49C7B77DC40FB8A301ADA6\", \"Grab\")"), Text); break;
		case E__GripEnum__pf::E__GripEnum__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Grip Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
