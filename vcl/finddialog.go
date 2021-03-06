
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------


package vcl


import (
	. "github.com/ying32/govcl/vcl/api"
    . "github.com/ying32/govcl/vcl/types"
    "unsafe"
)

type TFindDialog struct {
    IComponent
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// NewFindDialog
// CN: 创建一个新的对象。
// EN: Create a new object.
func NewFindDialog(owner IComponent) *TFindDialog {
    f := new(TFindDialog)
    f.instance = FindDialog_Create(CheckPtr(owner))
    f.ptr = unsafe.Pointer(f.instance)
    return f
}

// FindDialogFromInst
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
func FindDialogFromInst(inst uintptr) *TFindDialog {
    f := new(TFindDialog)
    f.instance = inst
    f.ptr = unsafe.Pointer(inst)
    return f
}

// FindDialogFromObj
// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
func FindDialogFromObj(obj IObject) *TFindDialog {
    f := new(TFindDialog)
    f.instance = CheckPtr(obj)
    f.ptr = unsafe.Pointer(f.instance)
    return f
}

// FindDialogFromUnsafePointer
// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
func FindDialogFromUnsafePointer(ptr unsafe.Pointer) *TFindDialog {
    f := new(TFindDialog)
    f.instance = uintptr(ptr)
    f.ptr = ptr
    return f
}

// Free 
// CN: 释放对象。
// EN: Free object.
func (f *TFindDialog) Free() {
    if f.instance != 0 {
        FindDialog_Free(f.instance)
        f.instance = 0
        f.ptr = unsafe.Pointer(uintptr(0))
    }
}

// Instance 
// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (f *TFindDialog) Instance() uintptr {
    return f.instance
}

// UnsafeAddr 
// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (f *TFindDialog) UnsafeAddr() unsafe.Pointer {
    return f.ptr
}

// IsValid 
// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (f *TFindDialog) IsValid() bool {
    return f.instance != 0
}

// TFindDialogClass
// CN: 获取类信息指针。
// EN: Get class information pointer.
func TFindDialogClass() TClass {
    return FindDialog_StaticClassType()
}

// CloseDialog
func (f *TFindDialog) CloseDialog() {
    FindDialog_CloseDialog(f.instance)
}

// Execute
// CN: 执行。
// EN: .
func (f *TFindDialog) Execute() bool {
    return FindDialog_Execute(f.instance)
}

// FindComponent
// CN: 查找指定名称的组件。
// EN: Find the component with the specified name.
func (f *TFindDialog) FindComponent(AName string) *TComponent {
    return ComponentFromInst(FindDialog_FindComponent(f.instance, AName))
}

// GetNamePath
// CN: 获取类名路径。
// EN: Get the class name path.
func (f *TFindDialog) GetNamePath() string {
    return FindDialog_GetNamePath(f.instance)
}

// HasParent
// CN: 是否有父容器。
// EN: Is there a parent container.
func (f *TFindDialog) HasParent() bool {
    return FindDialog_HasParent(f.instance)
}

// Assign
// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (f *TFindDialog) Assign(Source IObject) {
    FindDialog_Assign(f.instance, CheckPtr(Source))
}

// DisposeOf
// CN: 丢弃当前对象。
// EN: Discard the current object.
func (f *TFindDialog) DisposeOf() {
    FindDialog_DisposeOf(f.instance)
}

// ClassType
// CN: 获取类的类型信息。
// EN: Get class type information.
func (f *TFindDialog) ClassType() TClass {
    return FindDialog_ClassType(f.instance)
}

// ClassName
// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (f *TFindDialog) ClassName() string {
    return FindDialog_ClassName(f.instance)
}

// InstanceSize
// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (f *TFindDialog) InstanceSize() int32 {
    return FindDialog_InstanceSize(f.instance)
}

// InheritsFrom
// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (f *TFindDialog) InheritsFrom(AClass TClass) bool {
    return FindDialog_InheritsFrom(f.instance, AClass)
}

// Equals
// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (f *TFindDialog) Equals(Obj IObject) bool {
    return FindDialog_Equals(f.instance, CheckPtr(Obj))
}

// GetHashCode
// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (f *TFindDialog) GetHashCode() int32 {
    return FindDialog_GetHashCode(f.instance)
}

// ToString
// CN: 文本类信息。
// EN: Text information.
func (f *TFindDialog) ToString() string {
    return FindDialog_ToString(f.instance)
}

// Left
// CN: 获取左边位置。
// EN: Get Left position.
func (f *TFindDialog) Left() int32 {
    return FindDialog_GetLeft(f.instance)
}

// SetLeft
// CN: 设置左边位置。
// EN: Set Left position.
func (f *TFindDialog) SetLeft(value int32) {
    FindDialog_SetLeft(f.instance, value)
}

// Position
func (f *TFindDialog) Position() TPoint {
    return FindDialog_GetPosition(f.instance)
}

// SetPosition
func (f *TFindDialog) SetPosition(value TPoint) {
    FindDialog_SetPosition(f.instance, value)
}

// Top
// CN: 获取顶边位置。
// EN: Get Top position.
func (f *TFindDialog) Top() int32 {
    return FindDialog_GetTop(f.instance)
}

// SetTop
// CN: 设置顶边位置。
// EN: Set Top position.
func (f *TFindDialog) SetTop(value int32) {
    FindDialog_SetTop(f.instance, value)
}

// FindText
func (f *TFindDialog) FindText() string {
    return FindDialog_GetFindText(f.instance)
}

// SetFindText
func (f *TFindDialog) SetFindText(value string) {
    FindDialog_SetFindText(f.instance, value)
}

// Options
func (f *TFindDialog) Options() TFindOptions {
    return FindDialog_GetOptions(f.instance)
}

// SetOptions
func (f *TFindDialog) SetOptions(value TFindOptions) {
    FindDialog_SetOptions(f.instance, value)
}

// SetOnFind
func (f *TFindDialog) SetOnFind(fn TNotifyEvent) {
    FindDialog_SetOnFind(f.instance, fn)
}

// Handle
// CN: 获取控件句柄。
// EN: Get Control handle.
func (f *TFindDialog) Handle() HWND {
    return FindDialog_GetHandle(f.instance)
}

// Ctl3D
func (f *TFindDialog) Ctl3D() bool {
    return FindDialog_GetCtl3D(f.instance)
}

// SetCtl3D
func (f *TFindDialog) SetCtl3D(value bool) {
    FindDialog_SetCtl3D(f.instance, value)
}

// SetOnClose
func (f *TFindDialog) SetOnClose(fn TNotifyEvent) {
    FindDialog_SetOnClose(f.instance, fn)
}

// SetOnShow
// CN: 设置显示事件。
// EN: .
func (f *TFindDialog) SetOnShow(fn TNotifyEvent) {
    FindDialog_SetOnShow(f.instance, fn)
}

// ComponentCount
// CN: 获取组件总数。
// EN: Get the total number of components.
func (f *TFindDialog) ComponentCount() int32 {
    return FindDialog_GetComponentCount(f.instance)
}

// ComponentIndex
// CN: 获取组件索引。
// EN: Get component index.
func (f *TFindDialog) ComponentIndex() int32 {
    return FindDialog_GetComponentIndex(f.instance)
}

// SetComponentIndex
// CN: 设置组件索引。
// EN: Set component index.
func (f *TFindDialog) SetComponentIndex(value int32) {
    FindDialog_SetComponentIndex(f.instance, value)
}

// Owner
// CN: 获取组件所有者。
// EN: Get component owner.
func (f *TFindDialog) Owner() *TComponent {
    return ComponentFromInst(FindDialog_GetOwner(f.instance))
}

// Name
// CN: 获取组件名称。
// EN: Get the component name.
func (f *TFindDialog) Name() string {
    return FindDialog_GetName(f.instance)
}

// SetName
// CN: 设置组件名称。
// EN: Set the component name.
func (f *TFindDialog) SetName(value string) {
    FindDialog_SetName(f.instance, value)
}

// Tag
// CN: 获取对象标记。
// EN: Get the control tag.
func (f *TFindDialog) Tag() int {
    return FindDialog_GetTag(f.instance)
}

// SetTag
// CN: 设置对象标记。
// EN: Set the control tag.
func (f *TFindDialog) SetTag(value int) {
    FindDialog_SetTag(f.instance, value)
}

// Components
// CN: 获取指定索引组件。
// EN: Get the specified index component.
func (f *TFindDialog) Components(AIndex int32) *TComponent {
    return ComponentFromInst(FindDialog_GetComponents(f.instance, AIndex))
}

