external _NaN: float = "NaN" [@@bs.val];
external _Infinity: float = "Infinity" [@@bs.val];
external undefined: unit = "undefined" [@@bs.val];
external parseInt: 'a => radix::(option float) => float = "parseInt" [@@bs.val];
external parseFloat: 'a => float = "parseFloat" [@@bs.val];
external isNaN: 'a => bool = "isNaN" [@@bs.val];
external isFinite: 'a => bool = "isFinite" [@@bs.val];
external decodeURI: string => string = "decodeURI" [@@bs.val];
external decodeURIComponent: string => string = "decodeURIComponent" [@@bs.val];
external encodeURI: string => string = "encodeURI" [@@bs.val];
external encodeURIComponent: string => string = "encodeURIComponent" [@@bs.val];
let module Object = {
  type t;
  external create:TODO => TODO = "Object" [@@bs.new]; 
  external create:bool => bool = "Object" [@@bs.new]; 
  external create:float => float = "Object" [@@bs.new]; 
  external create:string => String = "Object" [@@bs.new]; 
  external create:T => T = "Object" [@@bs.new]; 
  external assign: Object$Assign = "" [@@bs.val];
  external create: 'a => properties::(option 'a) => 'a = "" [@@bs.val];
  external defineProperties: 'a => 'a => 'a = "" [@@bs.val];
  external defineProperty: 'a => 'a => 'a => 'a = "" [@@bs.val];
  external entries: 'a => Array = "" [@@bs.val];
  external freeze: T => T = "" [@@bs.val];
  external getOwnPropertyDescriptor: 'a => 'a => 'a = "" [@@bs.val];
  external getOwnPropertyNames: 'a => Array = "" [@@bs.val];
  external getOwnPropertySymbols: 'a => TODO = "" [@@bs.val];
  external getPrototypeOf: Object$GetPrototypeOf = "" [@@bs.val];
  external is: 'a => 'a => bool = "" [@@bs.val];
  external isExtensible: 'a => bool = "" [@@bs.val];
  external isFrozen: 'a => bool = "" [@@bs.val];
  external isSealed: 'a => bool = "" [@@bs.val];
  external keys: 'a => Array = "" [@@bs.val];
  external preventExtensions: 'a => 'a = "" [@@bs.val];
  external seal: 'a => 'a = "" [@@bs.val];
  external setPrototypeOf: 'a => TODO => bool = "" [@@bs.val];
  external values: 'a => Array = "" [@@bs.val];
  external hasOwnProperty: t => 'a => bool = "" [@@bs.send];
  external propertyIsEnumerable: t => 'a => bool = "" [@@bs.send];
  external toLocaleString: t => unit => string = "" [@@bs.send];
  external toString: t => unit => string = "" [@@bs.send];
  external valueOf: t => unit => Object = "" [@@bs.send];
};
let module $SymbolHasInstance = {
  type t;
};
let module $SymboIsConcatSpreadable = {
  type t;
};
let module $SymbolIterator = {
  type t;
};
let module $SymbolMatch = {
  type t;
};
let module $SymbolReplace = {
  type t;
};
let module $SymbolSearch = {
  type t;
};
let module $SymbolSpecies = {
  type t;
};
let module $SymbolSplit = {
  type t;
};
let module $SymbolToPrimitive = {
  type t;
};
let module $SymbolToStringTag = {
  type t;
};
let module $SymbolUnscopables = {
  type t;
};
let module Symbol = {
  type t;
  external create:value::(option 'a) => Symbol = "Symbol" [@@bs.new]; 
  external for: string => Symbol = "" [@@bs.val];
  external hasInstance: $SymbolHasInstance = "" [@@bs.val];
  external isConcatSpreadable: $SymboIsConcatSpreadable = "" [@@bs.val];
  external iterator: string = "" [@@bs.val];
  external keyFor: Symbol => TODO = "" [@@bs.val];
  let length = 0.;
  external match: $SymbolMatch = "" [@@bs.val];
  external replace: $SymbolReplace = "" [@@bs.val];
  external search: $SymbolSearch = "" [@@bs.val];
  external species: $SymbolSpecies = "" [@@bs.val];
  external split: $SymbolSplit = "" [@@bs.val];
  external toPrimitive: $SymbolToPrimitive = "" [@@bs.val];
  external toStringTag: $SymbolToStringTag = "" [@@bs.val];
  external unscopables: $SymbolUnscopables = "" [@@bs.val];
  external toString: t => unit => string = "" [@@bs.send];
  external valueOf: t => unit => TODO = "" [@@bs.send];
};
let module Function = {
  type t;
  external apply: Function$Prototype$Apply = "" [@@bs.get];
  external bind: Function$Prototype$Bind = "" [@@bs.get];
  external call: Function$Prototype$Call = "" [@@bs.get];
  external arguments: 'a = "" [@@bs.get];
  external caller: TODO = "" [@@bs.get];
  external length: float = "" [@@bs.get];
  external name: string = "" [@@bs.get];
};
let module Boolean = {
  type t;
  external create:'a => bool = "Boolean" [@@bs.new]; 
  external valueOf: bool => unit => bool = "" [@@bs.send];
};
let module Number = {
  type t;
  external create:'a => float = "Number" [@@bs.new]; 
  external _EPSILON: float = "" [@@bs.val];
  external _MAX_SAFE_INTEGER: float = "" [@@bs.val];
  external _MAX_VALUE: float = "" [@@bs.val];
  external _MIN_SAFE_INTEGER: float = "" [@@bs.val];
  external _MIN_VALUE: float = "" [@@bs.val];
  external _NaN: float = "" [@@bs.val];
  external _NEGATIVE_INFINITY: float = "" [@@bs.val];
  external _POSITIVE_INFINITY: float = "" [@@bs.val];
  external isFinite: 'a => bool = "" [@@bs.val];
  external isInteger: 'a => bool = "" [@@bs.val];
  external isNaN: 'a => bool = "" [@@bs.val];
  external isSafeInteger: 'a => bool = "" [@@bs.val];
  external parseFloat: string => float = "" [@@bs.val];
  external parseInt: string => float = "" [@@bs.val];
  external toExponential: float => fractionDigits::(option float) => string = "" [@@bs.send];
  external toFixed: float => fractionDigits::(option float) => string = "" [@@bs.send];
  external toPrecision: float => precision::(option float) => string = "" [@@bs.send];
  external toString: float => radix::(option float) => string = "" [@@bs.send];
  external valueOf: float => unit => float = "" [@@bs.send];
};
let module Math = {
  external _E: float = "Math.E" [@@bs.val];
  external _LN10: float = "Math.LN10" [@@bs.val];
  external _LN2: float = "Math.LN2" [@@bs.val];
  external _LOG10E: float = "Math.LOG10E" [@@bs.val];
  external _LOG2E: float = "Math.LOG2E" [@@bs.val];
  external _PI: float = "Math.PI" [@@bs.val];
  external _SQRT1_2: float = "Math.SQRT1_2" [@@bs.val];
  external _SQRT2: float = "Math.SQRT2" [@@bs.val];
  external abs: float => float = "Math.abs" [@@bs.val];
  external acos: float => float = "Math.acos" [@@bs.val];
  external acosh: float => float = "Math.acosh" [@@bs.val];
  external asin: float => float = "Math.asin" [@@bs.val];
  external asinh: float => float = "Math.asinh" [@@bs.val];
  external atan: float => float = "Math.atan" [@@bs.val];
  external atan2: float => float => float = "Math.atan2" [@@bs.val];
  external atanh: float => float = "Math.atanh" [@@bs.val];
  external cbrt: float => float = "Math.cbrt" [@@bs.val];
  external ceil: float => float = "Math.ceil" [@@bs.val];
  external clz32: float => float = "Math.clz32" [@@bs.val];
  external cos: float => float = "Math.cos" [@@bs.val];
  external cosh: float => float = "Math.cosh" [@@bs.val];
  external exp: float => float = "Math.exp" [@@bs.val];
  external expm1: float => float = "Math.expm1" [@@bs.val];
  external floor: float => float = "Math.floor" [@@bs.val];
  external fround: float => float = "Math.fround" [@@bs.val];
  external hypot: array 'rest => float = "Math.hypot" [@@bs.val] [@@bs.splice];
  external imul: float => float => float = "Math.imul" [@@bs.val];
  external log: float => float = "Math.log" [@@bs.val];
  external log10: float => float = "Math.log10" [@@bs.val];
  external log1p: float => float = "Math.log1p" [@@bs.val];
  external log2: float => float = "Math.log2" [@@bs.val];
  external max: array 'rest => float = "Math.max" [@@bs.val] [@@bs.splice];
  external min: array 'rest => float = "Math.min" [@@bs.val] [@@bs.splice];
  external pow: float => float => float = "Math.pow" [@@bs.val];
  external random: unit => float = "Math.random" [@@bs.val];
  external round: float => float = "Math.round" [@@bs.val];
  external sign: float => float = "Math.sign" [@@bs.val];
  external sin: float => float = "Math.sin" [@@bs.val];
  external sinh: float => float = "Math.sinh" [@@bs.val];
  external sqrt: float => float = "Math.sqrt" [@@bs.val];
  external tan: float => float = "Math.tan" [@@bs.val];
  external tanh: float => float = "Math.tanh" [@@bs.val];
  external trunc: float => float = "Math.trunc" [@@bs.val];
};
let module Array = {
  type t;
  external create:array 'rest => Array = "Array" [@@bs.new]; 
  external _@@iterator: t => unit => Iterator = "" [@@bs.send];
  external toLocaleString: t => unit => string = "" [@@bs.send];
  external concat: t => array 'rest => Array = "" [@@bs.send] [@@bs.splice];
  external copyWithin: t => float => float => end::(option float) => TODO = "" [@@bs.send];
  external entries: t => unit => Iterator = "" [@@bs.send];
  external every: t => T => float => Array => 'a => thisArg::(option 'a) => bool = "" [@@bs.send];
  external fill: t => T => begin::(option float) => end::(option float) => Array = "" [@@bs.send];
  external filter: t => TODO => Array = "" [@@bs.send];
  external filter: t => T => float => Array => 'a => thisArg::(option 'a) => Array = "" [@@bs.send];
  external find: t => T => float => Array => 'a => thisArg::(option 'a) => TODO = "" [@@bs.send];
  external findIndex: t => T => float => Array => 'a => thisArg::(option 'a) => float = "" [@@bs.send];
  external forEach: t => T => float => Array => 'a => thisArg::(option 'a) => unit = "" [@@bs.send];
  external includes: t => T => fromIndex::(option float) => bool = "" [@@bs.send];
  external indexOf: t => T => fromIndex::(option float) => float = "" [@@bs.send];
  external join: t => separator::(option string) => string = "" [@@bs.send];
  external keys: t => unit => Iterator = "" [@@bs.send];
  external lastIndexOf: t => T => fromIndex::(option float) => float = "" [@@bs.send];
  external map: t => T => float => Array => U => thisArg::(option 'a) => Array = "" [@@bs.send];
  external pop: t => unit => T = "" [@@bs.send];
  external push: t => array 'rest => float = "" [@@bs.send] [@@bs.splice];
  external reduce: t => T => T => float => Array => T => unit => T = "" [@@bs.send];
  external reduce: t => U => T => float => Array => U => U => U = "" [@@bs.send];
  external reduceRight: t => T => T => float => Array => T => unit => T = "" [@@bs.send];
  external reduceRight: t => U => T => float => Array => U => U => U = "" [@@bs.send];
  external reverse: t => unit => Array = "" [@@bs.send];
  external shift: t => unit => T = "" [@@bs.send];
  external slice: t => start::(option float) => end::(option float) => Array = "" [@@bs.send];
  external some: t => T => float => Array => 'a => thisArg::(option 'a) => bool = "" [@@bs.send];
  external sort: t => compareFn::(option T => T => float) => Array = "" [@@bs.send];
  external splice: t => float => deleteCount::(option float) => array 'rest => Array = "" [@@bs.send] [@@bs.splice];
  external unshift: t => array 'rest => float = "" [@@bs.send] [@@bs.splice];
  external values: t => unit => Iterator = "" [@@bs.send];
  external length: float = "" [@@bs.get];
  external isArray: 'a => bool = "" [@@bs.val];
  external from: Iterable => A => float => B => thisArg::(option 'a) => Array = "" [@@bs.val];
  external from: Iterable => unit => Array = "" [@@bs.val];
  external from: Iterator => A => float => B => thisArg::(option 'a) => Array = "" [@@bs.val];
  external from: Iterator => unit => Array = "" [@@bs.val];
  external from: TODO => unit => float => A => thisArg::(option 'a) => Array = "" [@@bs.val];
  external from: TODO => unit => Array = "" [@@bs.val];
  external of: array 'rest => TODO = "" [@@bs.val] [@@bs.splice];
};
let module String = {
  type t;
  external create:'a => string = "String" [@@bs.new]; 
  external _@@iterator: t => unit => Iterator = "" [@@bs.send];
  external anchor: t => string => string = "" [@@bs.send];
  external charAt: t => float => string = "" [@@bs.send];
  external charCodeAt: t => float => float = "" [@@bs.send];
  external codePointAt: t => float => float = "" [@@bs.send];
  external concat: t => array 'rest => string = "" [@@bs.send] [@@bs.splice];
  external endsWith: t => string => position::(option float) => bool = "" [@@bs.send];
  external includes: t => string => position::(option float) => bool = "" [@@bs.send];
  external indexOf: t => string => position::(option float) => float = "" [@@bs.send];
  external lastIndexOf: t => string => position::(option float) => float = "" [@@bs.send];
  external link: t => string => string = "" [@@bs.send];
  external localeCompare: t => string => float = "" [@@bs.send];
  external match: t => TODO => TODO = "" [@@bs.send];
  external normalize: t => format::(option string) => string = "" [@@bs.send];
  external repeat: t => float => string = "" [@@bs.send];
  external replace: t => TODO => TODO => string = "" [@@bs.send];
  external search: t => TODO => float = "" [@@bs.send];
  external slice: t => start::(option float) => end::(option float) => string = "" [@@bs.send];
  external split: t => TODO => limit::(option float) => Array = "" [@@bs.send];
  external startsWith: t => string => position::(option float) => bool = "" [@@bs.send];
  external substr: t => float => length::(option float) => string = "" [@@bs.send];
  external substring: t => float => end::(option float) => string = "" [@@bs.send];
  external toLocaleLowerCase: t => unit => string = "" [@@bs.send];
  external toLocaleUpperCase: t => unit => string = "" [@@bs.send];
  external toLowerCase: t => unit => string = "" [@@bs.send];
  external toUpperCase: t => unit => string = "" [@@bs.send];
  external trim: t => unit => string = "" [@@bs.send];
  external trimLeft: t => unit => string = "" [@@bs.send];
  external trimRight: t => unit => string = "" [@@bs.send];
  external valueOf: t => unit => string = "" [@@bs.send];
  external length: float = "" [@@bs.get];
  external fromCharCode: array 'rest => string = "" [@@bs.val] [@@bs.splice];
  external fromCodePoint: array 'rest => string = "" [@@bs.val] [@@bs.splice];
  external raw: string => string = "" [@@bs.val];
  external raw: $Shape => array 'rest => string = "" [@@bs.val] [@@bs.splice];
};
type TODO;
let module RegExp = {
  type t;
  external create:TODO => flags::(option RegExp$flags) => RegExp = "RegExp" [@@bs.new]; 
  external compile: t => unit => RegExp = "" [@@bs.send];
  external constructor: t => TODO => flags::(option RegExp$flags) => RegExp = "" [@@bs.send];
  external exec: t => string => 'a = "" [@@bs.send];
  external flags: string = "" [@@bs.get];
  external global: bool = "" [@@bs.get];
  external ignoreCase: bool = "" [@@bs.get];
  external lastIndex: float = "" [@@bs.get];
  external multiline: bool = "" [@@bs.get];
  external source: string = "" [@@bs.get];
  external sticky: bool = "" [@@bs.get];
  external unicode: bool = "" [@@bs.get];
  external test: t => string => bool = "" [@@bs.send];
  external toString: t => unit => string = "" [@@bs.send];
};
let module Date = {
  type t;
  external create:unit => string = "Date" [@@bs.new]; 
  external constructor: t => value::(option TODO) => month::(option float) => day::(option float) => hour::(option float) => minute::(option float) => second::(option float) => millisecond::(option float) => unit = "" [@@bs.send];
  external getDate: t => unit => float = "" [@@bs.send];
  external getDay: t => unit => float = "" [@@bs.send];
  external getFullYear: t => unit => float = "" [@@bs.send];
  external getHours: t => unit => float = "" [@@bs.send];
  external getMilliseconds: t => unit => float = "" [@@bs.send];
  external getMinutes: t => unit => float = "" [@@bs.send];
  external getMonth: t => unit => float = "" [@@bs.send];
  external getSeconds: t => unit => float = "" [@@bs.send];
  external getTime: t => unit => float = "" [@@bs.send];
  external getTimezoneOffset: t => unit => float = "" [@@bs.send];
  external getUTCDate: t => unit => float = "" [@@bs.send];
  external getUTCDay: t => unit => float = "" [@@bs.send];
  external getUTCFullYear: t => unit => float = "" [@@bs.send];
  external getUTCHours: t => unit => float = "" [@@bs.send];
  external getUTCMilliseconds: t => unit => float = "" [@@bs.send];
  external getUTCMinutes: t => unit => float = "" [@@bs.send];
  external getUTCMonth: t => unit => float = "" [@@bs.send];
  external getUTCSeconds: t => unit => float = "" [@@bs.send];
  external setDate: t => float => float = "" [@@bs.send];
  external setFullYear: t => float => month::(option float) => date::(option float) => float = "" [@@bs.send];
  external setHours: t => float => min::(option float) => sec::(option float) => ms::(option float) => float = "" [@@bs.send];
  external setMilliseconds: t => float => float = "" [@@bs.send];
  external setMinutes: t => float => sec::(option float) => ms::(option float) => float = "" [@@bs.send];
  external setMonth: t => float => date::(option float) => float = "" [@@bs.send];
  external setSeconds: t => float => ms::(option float) => float = "" [@@bs.send];
  external setTime: t => float => float = "" [@@bs.send];
  external setUTCDate: t => float => float = "" [@@bs.send];
  external setUTCFullYear: t => float => month::(option float) => date::(option float) => float = "" [@@bs.send];
  external setUTCHours: t => float => min::(option float) => sec::(option float) => ms::(option float) => float = "" [@@bs.send];
  external setUTCMilliseconds: t => float => float = "" [@@bs.send];
  external setUTCMinutes: t => float => sec::(option float) => ms::(option float) => float = "" [@@bs.send];
  external setUTCMonth: t => float => date::(option float) => float = "" [@@bs.send];
  external setUTCSeconds: t => float => ms::(option float) => float = "" [@@bs.send];
  external toDateString: t => unit => string = "" [@@bs.send];
  external toISOString: t => unit => string = "" [@@bs.send];
  external toJSON: t => key::(option 'a) => string = "" [@@bs.send];
  external toLocaleDateString: t => unit => string = "" [@@bs.send];
  external toLocaleString: t => unit => string = "" [@@bs.send];
  external toLocaleTimeString: t => unit => string = "" [@@bs.send];
  external toTimeString: t => unit => string = "" [@@bs.send];
  external toUTCString: t => unit => string = "" [@@bs.send];
  external valueOf: t => unit => float = "" [@@bs.send];
  external now: unit => float = "" [@@bs.val];
  external parse: string => float = "" [@@bs.val];
  external _UTC: float => float => date::(option float) => hours::(option float) => minutes::(option float) => seconds::(option float) => ms::(option float) => float = "" [@@bs.val];
};
let module CallSite = {
  type t;
  external getThis: t => unit => 'a = "" [@@bs.send];
  external getTypeName: t => unit => string = "" [@@bs.send];
  external getFunction: t => unit => TODO = "" [@@bs.send];
  external getFunctionName: t => unit => string = "" [@@bs.send];
  external getMethodName: t => unit => string = "" [@@bs.send];
  external getFileName: t => unit => TODO = "" [@@bs.send];
  external getLineNumber: t => unit => TODO = "" [@@bs.send];
  external getColumnNumber: t => unit => TODO = "" [@@bs.send];
  external getEvalOrigin: t => unit => TODO = "" [@@bs.send];
  external getScriptNameOrSourceURL: t => unit => TODO = "" [@@bs.send];
  external isToplevel: t => unit => bool = "" [@@bs.send];
  external isEval: t => unit => bool = "" [@@bs.send];
  external isNative: t => unit => bool = "" [@@bs.send];
  external isConstructor: t => unit => bool = "" [@@bs.send];
  external toString: t => unit => string = "" [@@bs.send];
};
let module Error = {
  type t;
  external create:message::(option string) => Error = "Error" [@@bs.new]; 
  external name: string = "" [@@bs.get];
  external message: string = "" [@@bs.get];
  external stack: string = "" [@@bs.get];
  external captureStackTrace: Object => constructor::(option (unit => unit)) => unit = "" [@@bs.val];
  external stackTraceLimit: float = "" [@@bs.val];
  external prepareStackTrace: Error => TODO => 'a = "" [@@bs.val];
};
let module EvalError = {
  type t;
};
let module RangeError = {
  type t;
};
let module ReferenceError = {
  type t;
};
let module SyntaxError = {
  type t;
};
let module TypeError = {
  type t;
};
let module URIError = {
  type t;
};
let module JSON = {
  type t;
  external parse: string => reviver::(option 'a => 'a => 'a) => 'a = "" [@@bs.val];
  external stringify: 'a => replacer::(option TODO) => space::(option TODO) => string = "" [@@bs.val];
};
type TODO;
type TODO;
type TODO;
let module Map = {
  type t;
  external _@@iterator: t => unit => Iterator = "" [@@bs.send];
  external constructor: t => TODO => unit = "" [@@bs.send];
  external clear: t => unit => unit = "" [@@bs.send];
  external delete: t => K => bool = "" [@@bs.send];
  external entries: t => unit => Iterator = "" [@@bs.send];
  external forEach: t => V => K => Map => 'a => thisArg::(option 'a) => unit = "" [@@bs.send];
  external get: t => K => TODO = "" [@@bs.send];
  external has: t => K => bool = "" [@@bs.send];
  external keys: t => unit => Iterator = "" [@@bs.send];
  external set: t => K => V => Map = "" [@@bs.send];
  external size: float = "" [@@bs.get];
  external values: t => unit => Iterator = "" [@@bs.send];
};
let module WeakMap = {
  type t;
  external clear: t => unit => unit = "" [@@bs.send];
  external delete: t => K => bool = "" [@@bs.send];
  external get: t => K => V = "" [@@bs.send];
  external has: t => K => bool = "" [@@bs.send];
  external set: t => K => V => WeakMap = "" [@@bs.send];
};
let module Set = {
  type t;
  external _@@iterator: t => unit => Iterator = "" [@@bs.send];
  external add: t => T => Set = "" [@@bs.send];
  external clear: t => unit => unit = "" [@@bs.send];
  external delete: t => T => bool = "" [@@bs.send];
  external entries: t => unit => Iterator = "" [@@bs.send];
  external forEach: t => T => T => Set => 'a => thisArg::(option 'a) => unit = "" [@@bs.send];
  external has: t => T => bool = "" [@@bs.send];
  external keys: t => unit => Iterator = "" [@@bs.send];
  external size: float = "" [@@bs.get];
  external values: t => unit => Iterator = "" [@@bs.send];
};
let module WeakSet = {
  type t;
  external constructor: t => iterable::(option Iterable) => unit = "" [@@bs.send];
  external add: t => T => WeakSet = "" [@@bs.send];
  external delete: t => T => bool = "" [@@bs.send];
  external has: t => T => bool = "" [@@bs.send];
};
let module Promise = {
  type t;
  external constructor: t => TODO => unit => 'a => unit => 'a => unit = "" [@@bs.send];
  external then: t => onFulfill::(option R => TODO) => onReject::(option 'a => TODO) => Promise = "" [@@bs.send];
  external catch: t => onReject::(option 'a => TODO) => Promise = "" [@@bs.send];
  external resolve: TODO => Promise = "" [@@bs.val];
  external reject: error::(option 'a) => Promise = "" [@@bs.val];
  external all: Promise$All = "" [@@bs.val];
  external race: Array => Promise = "" [@@bs.val];
};
external _$await: TODO => T = "$await" [@@bs.val];
let module ArrayBuffer = {
  type t;
  external isView: 'a => bool = "" [@@bs.val];
  external constructor: t => float => unit = "" [@@bs.send];
  external byteLength: float = "" [@@bs.get];
  external slice: t => float => end::(option float) => this = "" [@@bs.send];
};
type TODO;
let module $TypedArray = {
  type t;
  external _BYTES_PER_ELEMENT: float = "" [@@bs.val];
  external from: Iterable => this = "" [@@bs.val];
  external of: array 'rest => this = "" [@@bs.val] [@@bs.splice];
  external constructor: t => float => unit = "" [@@bs.send];
  external constructor: t => $TypedArray => unit = "" [@@bs.send];
  external constructor: t => Iterable => unit = "" [@@bs.send];
  external constructor: t => ArrayBuffer => byteOffset::(option float) => length::(option float) => unit = "" [@@bs.send];
  external _@@iterator: t => unit => Iterator = "" [@@bs.send];
  external buffer: ArrayBuffer = "" [@@bs.get];
  external byteLength: float = "" [@@bs.get];
  external byteOffset: float = "" [@@bs.get];
  external length: float = "" [@@bs.get];
  external copyWithin: t => float => float => end::(option float) => unit = "" [@@bs.send];
  external entries: t => unit => Iterator = "" [@@bs.send];
  external every: t => float => float => this => 'a => thisArg::(option 'a) => bool = "" [@@bs.send];
  external fill: t => float => start::(option float) => end::(option float) => unit = "" [@@bs.send];
  external filter: t => float => float => this => 'a => thisArg::(option 'a) => this = "" [@@bs.send];
  external find: t => float => float => this => 'a => thisArg::(option 'a) => TODO = "" [@@bs.send];
  external findIndex: t => float => float => this => 'a => thisArg::(option 'a) => TODO = "" [@@bs.send];
  external forEach: t => float => float => this => 'a => thisArg::(option 'a) => unit = "" [@@bs.send];
  external includes: t => float => fromIndex::(option float) => bool = "" [@@bs.send];
  external indexOf: t => float => fromIndex::(option float) => float = "" [@@bs.send];
  external join: t => separator::(option string) => string = "" [@@bs.send];
  external keys: t => unit => Array = "" [@@bs.send];
  external lastIndexOf: t => float => fromIndex::(option float) => float = "" [@@bs.send];
  external map: t => float => float => this => float => thisArg::(option 'a) => this = "" [@@bs.send];
  external reduce: t => float => float => float => this => float => unit => float = "" [@@bs.send];
  external reduce: t => U => float => float => this => U => U => U = "" [@@bs.send];
  external reduceRight: t => float => float => float => this => float => unit => float = "" [@@bs.send];
  external reduceRight: t => U => float => float => this => U => U => U = "" [@@bs.send];
  external reverse: t => unit => this = "" [@@bs.send];
  external set: t => TODO => offset::(option float) => unit = "" [@@bs.send];
  external slice: t => begin::(option float) => end::(option float) => this = "" [@@bs.send];
  external some: t => float => float => this => 'a => thisArg::(option 'a) => bool = "" [@@bs.send];
  external sort: t => compare::(option float => float => float) => unit = "" [@@bs.send];
  external subarray: t => begin::(option float) => end::(option float) => this = "" [@@bs.send];
  external values: t => unit => Iterator = "" [@@bs.send];
};
let module Int8Array = {
  type t;
};
let module Uint8Array = {
  type t;
};
let module Uint8ClampedArray = {
  type t;
};
let module Int16Array = {
  type t;
};
let module Uint16Array = {
  type t;
};
let module Int32Array = {
  type t;
};
let module Uint32Array = {
  type t;
};
let module Float32Array = {
  type t;
};
let module Float64Array = {
  type t;
};
let module DataView = {
  type t;
  external constructor: t => ArrayBuffer => byteOffset::(option float) => length::(option float) => unit = "" [@@bs.send];
  external buffer: ArrayBuffer = "" [@@bs.get];
  external byteLength: float = "" [@@bs.get];
  external byteOffset: float = "" [@@bs.get];
  external getInt8: t => float => float = "" [@@bs.send];
  external getUint8: t => float => float = "" [@@bs.send];
  external getInt16: t => float => littleEndian::(option bool) => float = "" [@@bs.send];
  external getUint16: t => float => littleEndian::(option bool) => float = "" [@@bs.send];
  external getInt32: t => float => littleEndian::(option bool) => float = "" [@@bs.send];
  external getUint32: t => float => littleEndian::(option bool) => float = "" [@@bs.send];
  external getFloat32: t => float => littleEndian::(option bool) => float = "" [@@bs.send];
  external getFloat64: t => float => littleEndian::(option bool) => float = "" [@@bs.send];
  external setInt8: t => float => float => unit = "" [@@bs.send];
  external setUint8: t => float => float => unit = "" [@@bs.send];
  external setInt16: t => float => float => littleEndian::(option bool) => unit = "" [@@bs.send];
  external setUint16: t => float => float => littleEndian::(option bool) => unit = "" [@@bs.send];
  external setInt32: t => float => float => littleEndian::(option bool) => unit = "" [@@bs.send];
  external setUint32: t => float => float => littleEndian::(option bool) => unit = "" [@@bs.send];
  external setFloat32: t => float => float => littleEndian::(option bool) => unit = "" [@@bs.send];
  external setFloat64: t => float => float => littleEndian::(option bool) => unit = "" [@@bs.send];
};
external btoa: string => string = "btoa" [@@bs.val];
external atob: string => string = "atob" [@@bs.val];
external clearInterval: intervalId::(option float) => unit = "clearInterval" [@@bs.val];
external clearTimeout: timeoutId::(option 'a) => unit = "clearTimeout" [@@bs.val];
external setTimeout: 'a => ms::(option float) => array 'rest => float = "setTimeout" [@@bs.val];
external setInterval: 'a => ms::(option float) => array 'rest => float = "setInterval" [@@bs.val];
let module Reflect = {
  type t;
  external apply: (unit => unit) => thisArg::(option 'a) => argumentsList::(option Array) => 'a = "" [@@bs.val];
  external construct: (unit => unit) => argumentsList::(option Array) => newTarget::(option (unit => unit)) => 'a = "" [@@bs.val];
  external defineProperty: 'a => 'a => 'a => bool = "" [@@bs.val];
  external deleteProperty: 'a => 'a => bool = "" [@@bs.val];
  external get: 'a => 'a => receiver::(option 'a) => 'a = "" [@@bs.val];
  external getOwnPropertyDescriptor: 'a => 'a => 'a = "" [@@bs.val];
  external getPrototypeOf: 'a => 'a = "" [@@bs.val];
  external has: 'a => 'a => bool = "" [@@bs.val];
  external isExtensible: 'a => bool = "" [@@bs.val];
  external ownKeys: 'a => Array = "" [@@bs.val];
  external preventExtensions: 'a => bool = "" [@@bs.val];
  external set: 'a => 'a => 'a => receiver::(option 'a) => bool = "" [@@bs.val];
  external setPrototypeOf: 'a => 'a => bool = "" [@@bs.val];
};
type TODO;
type TODO;
let module Proxy = {
  type t;
  external constructor: t => T => Proxy$traps => T = "" [@@bs.send];
  external revocable: T => Proxy$traps => Proxy$revocable = "" [@@bs.val];
};
external global: 'a = "global" [@@bs.val];
let module Module = {
  external exports: 'a = "module.exports" [@@bs.val];
  external require: string => 'a = "module.require" [@@bs.val];
  external id: string = "module.id" [@@bs.val];
  external filename: string = "module.filename" [@@bs.val];
  external loaded: bool = "module.loaded" [@@bs.val];
  external parent: 'a = "module.parent" [@@bs.val];
  external children: Array = "module.children" [@@bs.val];
};
external require: string => 'a = "require" [@@bs.val];
external exports: 'a = "exports" [@@bs.val];
let module Console = {
  external _assert: 'a => array 'rest => unit = "console.assert" [@@bs.val] [@@bs.splice];
  external clear: unit => unit = "console.clear" [@@bs.val];
  external count: string => unit = "console.count" [@@bs.val];
  external debug: array 'rest => unit = "console.debug" [@@bs.val] [@@bs.splice];
  external dir: array 'rest => unit = "console.dir" [@@bs.val] [@@bs.splice];
  external dirxml: array 'rest => unit = "console.dirxml" [@@bs.val] [@@bs.splice];
  external error: array 'rest => unit = "console.error" [@@bs.val] [@@bs.splice];
  external __exception: array 'rest => unit = "console._exception" [@@bs.val] [@@bs.splice];
  external group: array 'rest => unit = "console.group" [@@bs.val] [@@bs.splice];
  external groupCollapsed: array 'rest => unit = "console.groupCollapsed" [@@bs.val] [@@bs.splice];
  external groupEnd: unit => unit = "console.groupEnd" [@@bs.val];
  external info: array 'rest => unit = "console.info" [@@bs.val] [@@bs.splice];
  external log: array 'rest => unit = "console.log" [@@bs.val] [@@bs.splice];
  external profile: string => unit = "console.profile" [@@bs.val];
  external profileEnd: unit => unit = "console.profileEnd" [@@bs.val];
  external table: TODO => unit = "console.table" [@@bs.val];
  external time: string => unit = "console.time" [@@bs.val];
  external timeEnd: string => unit = "console.timeEnd" [@@bs.val];
  external timeStamp: label::(option string) => unit = "console.timeStamp" [@@bs.val];
  external trace: array 'rest => unit = "console.trace" [@@bs.val] [@@bs.splice];
  external warn: array 'rest => unit = "console.warn" [@@bs.val] [@@bs.splice];
};
