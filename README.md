# MySecondCppProject
# Simple Contact Management System (C++)

這是一個基於 C++ 開發的輕量級通訊錄管理系統。本專案透過自定義 **Struct** 結構與 **Array** 實作資料的儲存、顯示與多條件檢索功能，適合展示基礎程式設計與邏輯規劃能力。

## 專案特點

* **自定義資料結構**：使用 `struct` 封裝 `name`、`call` 與 `gmail`，展現對抽象資料類型的掌握。
* **多條件搜尋引擎**：實作了三種不同的檢索機制，使用者可透過「姓名」、「電話」或「電子郵件」快速查找資料。
* **防錯處理邏輯**：內建陣列邊界檢查（Max 100）與輸入錯誤的防呆提示，確保程式運行的穩定性。

---
##  系統架構圖

此系統的運作流程如下，展示了從主選單分配至各項功能的邏輯分支：

---

## 核心功能:

### 1. 新增聯絡人 (Add Someone)

支援一次性新增多筆資料。系統會自動計算剩餘空間，防止資料溢出 (Buffer Overflow)。

### 2. 資料清單 (List)

以格式化輸出的方式展現所有已儲存的聯絡資訊。

### 3. 多準則查詢 (Check)

使用者可以根據需求，靈活切換三種查詢模式：

* **按姓名查詢**：回傳電話與電子郵件。
* **按電話查詢**：回傳姓名與電子郵件。
* **按郵件查詢**：回傳姓名與電話。

---

## 執行畫面示範

```text
1.AddSomeone 2.List 3.Check 4.Leave
> 1
Number_of_people: 1
Name: Gemini
Call: 0912345678
Gmail: gemini@example.com
Contacts list with new members 1 and Max is 100

```

---

## 細節化功能

在查詢功能中，我增加了一項多重判斷邏輯，確保程式能精準回應使用者的輸入需求：

```cpp
// 範例：依據使用者選擇 (k) 決定搜尋標的
if (k == 1) { // 姓名搜尋
    cin >> FindName;
    for (int i = 0; i < count; i++) {
        if (list[i].name == FindName) {
            cout << "call: " << list[i].call << " gmail: " << list[i].gmail << endl;
        }
    }
}

```
