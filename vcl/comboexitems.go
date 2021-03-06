
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

type TComboExItems struct {
    IObject
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// ComboExItemsFromInst
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
func ComboExItemsFromInst(inst uintptr) *TComboExItems {
    c := new(TComboExItems)
    c.instance = inst
    c.ptr = unsafe.Pointer(inst)
    return c
}

// ComboExItemsFromObj
// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
func ComboExItemsFromObj(obj IObject) *TComboExItems {
    c := new(TComboExItems)
    c.instance = CheckPtr(obj)
    c.ptr = unsafe.Pointer(c.instance)
    return c
}

// ComboExItemsFromUnsafePointer
// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
func ComboExItemsFromUnsafePointer(ptr unsafe.Pointer) *TComboExItems {
    c := new(TComboExItems)
    c.instance = uintptr(ptr)
    c.ptr = ptr
    return c
}

// Instance 
// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (c *TComboExItems) Instance() uintptr {
    return c.instance
}

// UnsafeAddr 
// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (c *TComboExItems) UnsafeAddr() unsafe.Pointer {
    return c.ptr
}

// IsValid 
// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (c *TComboExItems) IsValid() bool {
    return c.instance != 0
}

// TComboExItemsClass
// CN: 获取类信息指针。
// EN: Get class information pointer.
func TComboExItemsClass() TClass {
    return ComboExItems_StaticClassType()
}

// Add
func (c *TComboExItems) Add() *TComboExItem {
    return ComboExItemFromInst(ComboExItems_Add(c.instance))
}

// AddItem
func (c *TComboExItems) AddItem(Caption string, ImageIndex int32, SelectedImageIndex int32, OverlayImageIndex int32, Indent int32, Data uintptr) *TComboExItem {
    return ComboExItemFromInst(ComboExItems_AddItem(c.instance, Caption , ImageIndex , SelectedImageIndex , OverlayImageIndex , Indent , Data))
}

// Insert
func (c *TComboExItems) Insert(Index int32) *TComboExItem {
    return ComboExItemFromInst(ComboExItems_Insert(c.instance, Index))
}

// Owner
// CN: 组件所有者。
// EN: component owner.
func (c *TComboExItems) Owner() *TObject {
    return ObjectFromInst(ComboExItems_Owner(c.instance))
}

// Assign
// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (c *TComboExItems) Assign(Source IObject) {
    ComboExItems_Assign(c.instance, CheckPtr(Source))
}

// BeginUpdate
func (c *TComboExItems) BeginUpdate() {
    ComboExItems_BeginUpdate(c.instance)
}

// Clear
// CN: 清除。
// EN: .
func (c *TComboExItems) Clear() {
    ComboExItems_Clear(c.instance)
}

// ClearAndResetID
func (c *TComboExItems) ClearAndResetID() {
    ComboExItems_ClearAndResetID(c.instance)
}

// Delete
func (c *TComboExItems) Delete(Index int32) {
    ComboExItems_Delete(c.instance, Index)
}

// EndUpdate
func (c *TComboExItems) EndUpdate() {
    ComboExItems_EndUpdate(c.instance)
}

// FindItemID
func (c *TComboExItems) FindItemID(ID int32) *TCollectionItem {
    return CollectionItemFromInst(ComboExItems_FindItemID(c.instance, ID))
}

// GetNamePath
// CN: 获取类名路径。
// EN: Get the class name path.
func (c *TComboExItems) GetNamePath() string {
    return ComboExItems_GetNamePath(c.instance)
}

// DisposeOf
// CN: 丢弃当前对象。
// EN: Discard the current object.
func (c *TComboExItems) DisposeOf() {
    ComboExItems_DisposeOf(c.instance)
}

// ClassType
// CN: 获取类的类型信息。
// EN: Get class type information.
func (c *TComboExItems) ClassType() TClass {
    return ComboExItems_ClassType(c.instance)
}

// ClassName
// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (c *TComboExItems) ClassName() string {
    return ComboExItems_ClassName(c.instance)
}

// InstanceSize
// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (c *TComboExItems) InstanceSize() int32 {
    return ComboExItems_InstanceSize(c.instance)
}

// InheritsFrom
// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (c *TComboExItems) InheritsFrom(AClass TClass) bool {
    return ComboExItems_InheritsFrom(c.instance, AClass)
}

// Equals
// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (c *TComboExItems) Equals(Obj IObject) bool {
    return ComboExItems_Equals(c.instance, CheckPtr(Obj))
}

// GetHashCode
// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (c *TComboExItems) GetHashCode() int32 {
    return ComboExItems_GetHashCode(c.instance)
}

// ToString
// CN: 文本类信息。
// EN: Text information.
func (c *TComboExItems) ToString() string {
    return ComboExItems_ToString(c.instance)
}

// Capacity
func (c *TComboExItems) Capacity() int32 {
    return ComboExItems_GetCapacity(c.instance)
}

// SetCapacity
func (c *TComboExItems) SetCapacity(value int32) {
    ComboExItems_SetCapacity(c.instance, value)
}

// Count
func (c *TComboExItems) Count() int32 {
    return ComboExItems_GetCount(c.instance)
}

// ComboItems
func (c *TComboExItems) ComboItems(Index int32) *TComboExItem {
    return ComboExItemFromInst(ComboExItems_GetComboItems(c.instance, Index))
}

