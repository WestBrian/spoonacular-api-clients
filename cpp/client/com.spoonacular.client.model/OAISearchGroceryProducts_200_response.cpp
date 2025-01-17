/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAISearchGroceryProducts_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISearchGroceryProducts_200_response::OAISearchGroceryProducts_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISearchGroceryProducts_200_response::OAISearchGroceryProducts_200_response() {
    this->initializeModel();
}

OAISearchGroceryProducts_200_response::~OAISearchGroceryProducts_200_response() {}

void OAISearchGroceryProducts_200_response::initializeModel() {

    m_products_isSet = false;
    m_products_isValid = false;

    m_total_products_isSet = false;
    m_total_products_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_offset_isSet = false;
    m_offset_isValid = false;

    m_number_isSet = false;
    m_number_isValid = false;
}

void OAISearchGroceryProducts_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISearchGroceryProducts_200_response::fromJsonObject(QJsonObject json) {

    m_products_isValid = ::OpenAPI::fromJsonValue(products, json[QString("products")]);
    m_products_isSet = !json[QString("products")].isNull() && m_products_isValid;

    m_total_products_isValid = ::OpenAPI::fromJsonValue(total_products, json[QString("totalProducts")]);
    m_total_products_isSet = !json[QString("totalProducts")].isNull() && m_total_products_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_offset_isValid = ::OpenAPI::fromJsonValue(offset, json[QString("offset")]);
    m_offset_isSet = !json[QString("offset")].isNull() && m_offset_isValid;

    m_number_isValid = ::OpenAPI::fromJsonValue(number, json[QString("number")]);
    m_number_isSet = !json[QString("number")].isNull() && m_number_isValid;
}

QString OAISearchGroceryProducts_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISearchGroceryProducts_200_response::asJsonObject() const {
    QJsonObject obj;
    if (products.size() > 0) {
        obj.insert(QString("products"), ::OpenAPI::toJsonValue(products));
    }
    if (m_total_products_isSet) {
        obj.insert(QString("totalProducts"), ::OpenAPI::toJsonValue(total_products));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_offset_isSet) {
        obj.insert(QString("offset"), ::OpenAPI::toJsonValue(offset));
    }
    if (m_number_isSet) {
        obj.insert(QString("number"), ::OpenAPI::toJsonValue(number));
    }
    return obj;
}

QSet<OAIAutocompleteRecipeSearch_200_response_inner> OAISearchGroceryProducts_200_response::getProducts() const {
    return products;
}
void OAISearchGroceryProducts_200_response::setProducts(const QSet<OAIAutocompleteRecipeSearch_200_response_inner> &products) {
    this->products = products;
    this->m_products_isSet = true;
}

bool OAISearchGroceryProducts_200_response::is_products_Set() const{
    return m_products_isSet;
}

bool OAISearchGroceryProducts_200_response::is_products_Valid() const{
    return m_products_isValid;
}

qint32 OAISearchGroceryProducts_200_response::getTotalProducts() const {
    return total_products;
}
void OAISearchGroceryProducts_200_response::setTotalProducts(const qint32 &total_products) {
    this->total_products = total_products;
    this->m_total_products_isSet = true;
}

bool OAISearchGroceryProducts_200_response::is_total_products_Set() const{
    return m_total_products_isSet;
}

bool OAISearchGroceryProducts_200_response::is_total_products_Valid() const{
    return m_total_products_isValid;
}

QString OAISearchGroceryProducts_200_response::getType() const {
    return type;
}
void OAISearchGroceryProducts_200_response::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAISearchGroceryProducts_200_response::is_type_Set() const{
    return m_type_isSet;
}

bool OAISearchGroceryProducts_200_response::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAISearchGroceryProducts_200_response::getOffset() const {
    return offset;
}
void OAISearchGroceryProducts_200_response::setOffset(const qint32 &offset) {
    this->offset = offset;
    this->m_offset_isSet = true;
}

bool OAISearchGroceryProducts_200_response::is_offset_Set() const{
    return m_offset_isSet;
}

bool OAISearchGroceryProducts_200_response::is_offset_Valid() const{
    return m_offset_isValid;
}

qint32 OAISearchGroceryProducts_200_response::getNumber() const {
    return number;
}
void OAISearchGroceryProducts_200_response::setNumber(const qint32 &number) {
    this->number = number;
    this->m_number_isSet = true;
}

bool OAISearchGroceryProducts_200_response::is_number_Set() const{
    return m_number_isSet;
}

bool OAISearchGroceryProducts_200_response::is_number_Valid() const{
    return m_number_isValid;
}

bool OAISearchGroceryProducts_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (products.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_products_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_offset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_number_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISearchGroceryProducts_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_products_isValid && m_total_products_isValid && m_type_isValid && m_offset_isValid && m_number_isValid && true;
}

} // namespace OpenAPI
